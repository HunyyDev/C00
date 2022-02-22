#include <iostream>

using namespace std;

struct hs {
    float toan,van,dtb;
    void TinhDtb()
    {
        dtb=(toan+van)/2;
    }
    void XuatDtb()
    {
        cout<<"Diem trung binh: "<<dtb;
    }
    void nhap()
    {
        cin>>toan>>van;
    }
};

hs A;

int main()
{
    A.nhap();
    A.TinhDtb();
    A.XuatDtb();
    return 0;
}