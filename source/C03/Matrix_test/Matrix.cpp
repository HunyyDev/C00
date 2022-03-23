#include "Matrix.h"
#include <vector>

using namespace std;

void Matrix::SetMatrix(int n, int m)
{
    r=n;
    c=m;
    arr.resize(n,vector<int>(m,0));
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            cin>>arr[i][j];
        }
    }
};
void Matrix::GetMatrix()
{
    for(int i=0; i<r; ++i)
    {
        for(int j=0; j<c; ++j)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
};
Matrix operator+(Matrix A, Matrix B)
{
    for(int i=0; i<A.r; ++i)
    {
        for(int j=0; j<A.c; ++j)
        {
            A.arr[i][j]+=B.arr[i][j];
        }
    }
    return A;
}
Matrix::Matrix(vector<vector<int>>A) : arr(A){};

Matrix operator-(Matrix A, Matrix B)
{
      for(int i=0; i<A.r; ++i)
    {
        for(int j=0; j<A.c; ++j)
        {
            A.arr[i][j]-=B.arr[i][j];
        }
    }
    return A;
}

Matrix operator*(Matrix A, Matrix B)
{
    if (A.c!=B.r)
    {
        cout<<"Size error";
    }
    vector<vector<int>> C(A.r,vector<int>(B.c));
    for(int i=0; i<A.r; ++i)
    {
        for(int j=0; j<B.c; ++j)
        {
            for(int k=0; k<A.c; ++k)
            {
                C[i][j]+=A.arr[i][k]*B.arr[k][j];
            }
        }
    }
    Matrix tmp;
    tmp.arr=C;
    tmp.r = A.r;
    tmp.c = B.c;
    return tmp;
}

Matrix operator*(Matrix A, int B)
{
    for(int i=0; i<A.r; ++i)
    {
        for(int j=0; j<A.c; ++j)
        {
            A.arr[i][j]-=B;
        }
    }
    return A;
}

Matrix::Matrix() {}
