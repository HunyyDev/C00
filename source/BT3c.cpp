#include <iostream>

using namespace std;

struct ps
{
    long long tu, mau;
    bool maukhac0()
    {
        return mau != 0;
    }
};

ps A, B;
void NhapPs(ps &A)
{
    cin >> A.tu >> A.mau;
    if (A.maukhac0() == false)
    {
        cout << "Phan so khong hop le";
    }
}

int main()
{
    NhapPs(A);
    NhapPs(B);
    cout << "Tong " << double(A.tu) / A.mau + double(B.tu) / B.mau << "\n";
    cout << "Hieu " << double(A.tu) / A.mau - double(B.tu) / B.mau << "\n";
    cout << "Tich " << (double(A.tu) / A.mau) * (double(B.tu) / B.mau) << "\n";
    cout << "Thuong " << (double(A.tu) / A.mau) / (double(B.tu) / B.mau) << "\n";
    return 0;
}