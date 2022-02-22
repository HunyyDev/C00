#include <iostream>

using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

struct ps
{
    long long tu, mau;
    bool maukhac0()
    {
        return mau != 0;
    }
};

inline void PrintErr()
{
    cout << "Phan so khong hop le";
}

int main()
{
    ps A, B;
    cin >> A.tu >> A.mau;
    if (A.maukhac0() == false)
    {
        PrintErr();
        return 0;
    }
    cin >> B.tu >> B.mau;
    if (B.maukhac0()==false)
    {
        PrintErr();
        return 0;
    }
    if (A.tu / A.mau > B.tu / B.mau)
    {
        cout << "Phan so lon nhat la " << A.tu << "/" << A.mau;
    }
    else if (A.tu / A.mau < B.tu / B.mau)
    {
        cout << "Phan so lon nhat la " << B.tu << "/" << B.mau;
    }
    else
    {
        cout << "Hai phan so bang nhau";
    }
    return 0;
}