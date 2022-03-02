#include <iostream>


long long gcd(long long a, long long b)
{
    if (a == 0) return b;
    return gcd(b % a, a);
}

class ps {
public:
    long long tu, mau;
    //ps(long long t, long long m) {
    //    tu = t;
    //    mau = m;
    //}
    void Nhap()
    {
        std::cin >> tu >> mau;
    }
    void HopThucHoa()
    {
        if (mau < 0) {
            tu *= -1;
            mau *= -1;
        }
    }
    void RutGon()
    {
        tu /= gcd(llabs(tu), llabs(mau));
        mau /= gcd(llabs(tu), llabs(mau));
    }
    void Xuat()
    {
        if (mau == 0) 
        {
            std::cout << "Phan so khong hop le\n";
        } 
        else
        {
            std::cout << tu << "/" << mau;
        }
    }
    ps Cong(ps B)
    {
        long long newtu = tu * B.mau + B.tu * mau;
        long long newmau = mau * B.mau;
        ps sum = { newtu, newmau };
        sum.HopThucHoa();
        sum.RutGon();
        return sum;
    }
    bool LonHon(ps B) {
        return tu / mau > B.tu / B.mau;
    }
};

ps A, B, S;

int main()
{
    A.Nhap();
    B.Nhap();
    S = A.Cong(B);
    std::cout << "Tong A + B = ";
    S.Xuat();
    std::cout << "\n";
    if (A.LonHon(B)) 
    {
        A.Xuat();
        std::cout << " lon hon";
    }
    else
    {
        B.Xuat();
        std::cout << " lon hon";
    }
    return 0;
}