#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if (a==0) return b;
    return gcd(b%a,a);
}

struct ps {
    long long tu,mau;
    bool maukhac0()
    {
        return mau!=0;
    }
    void RutGon()
    {
        tu/=gcd(llabs(tu),llabs(mau));
        mau/=gcd(llabs(tu),llabs(mau));
    }
    void Xuat()
    {
        if (maukhac0()==false) return;
        cout<<tu<<"/"<<mau;
    }
};

ps A;

void NhapPs(ps &A) 
{
    cin>>A.tu>>A.mau;
    if (A.maukhac0()==false) {
        cout<<"Phan so khong hop le";
    }
}

int main()
{
    NhapPs(A);
    A.RutGon();
    A.Xuat();
    return 0;
}