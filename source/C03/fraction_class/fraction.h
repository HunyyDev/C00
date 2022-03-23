#include <iostream>

using namespace std;

class fract {
private:
    long long tu = 0, mau = 1;
public:
    long long GetMau();
    fract();
    fract(long long tu, long long mau);
    bool HopThucHoa();
    void RutGon();
    void Xuat();
    friend fract operator+(const fract&, const fract&);
    friend fract operator-(const fract&, const fract&);
    friend fract operator*(const fract&, const fract&);
    friend fract operator/(const fract&, const fract&);
    friend bool operator>(const fract&, const fract&);
    friend istream& operator>>(istream& is, fract& T);
    friend ostream& operator<<(ostream& os,const fract& T);
    long long gcd(long long a, long long b);
};
