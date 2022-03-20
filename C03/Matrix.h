#include <iostream>
#include <vector>

using namespace std;

class Matrix
{
    vector<vector<int>> arr;
    int r,c;
public:
    void SetMatrix(int n, int m);
    Matrix(vector<vector<int>> A);
    Matrix();
    void GetMatrix();
    friend Matrix operator+(Matrix A, Matrix B);
    friend Matrix operator-(Matrix A, Matrix B);
    friend Matrix operator*(Matrix A, Matrix B);
    friend Matrix operator*(Matrix A, int B);
};
