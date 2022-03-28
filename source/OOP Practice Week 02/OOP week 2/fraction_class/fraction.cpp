#include <iostream>
#include "fraction.h"
#include <stdexcept>

long long fract::GetMau()
{
	return mau;
}

fract::fract()
{
	this->tu = 0;
	this->mau = 1;
}

fract::fract(long long tu, long long mau)
{
	this->tu = tu;
	this->mau = mau;
}

bool fract::HopThucHoa()
{
	if (mau < 0) {
		tu *= -1;
		mau *= -1;
	}
	if (mau == 0)
	{
		return false;
	}
	return true;
}
void fract::RutGon()
{
	long long temp = gcd(llabs(tu), llabs(mau));
	tu /= temp;
	mau /= temp;
}
void fract::Xuat()
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
fract operator+(const fract& A, const fract& B)
{
	long long newtu = A.tu * B.mau + B.tu * A.mau;
	long long newmau = A.mau * B.mau;
	fract re = { newtu, newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

fract operator-(const fract& A, const  fract& B)
{
	long long newtu = A.tu * B.mau - B.tu * A.mau;
	long long newmau = A.mau * B.mau;
	fract re = { newtu, newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

fract operator*(const fract& A, const fract& B)
{
	long long newtu = A.tu * B.tu;
	long long newmau = A.mau * B.mau;
	fract re = { newtu,newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

fract operator/(const fract& A, const fract& B)
{
	long long newtu = A.tu * B.mau;
	long long newmau = A.mau * B.tu;
	fract re = { newtu,newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

bool operator>(const fract& A, const fract& B) {
	return A.tu / A.mau > B.tu / B.mau;
}

istream& operator>>(istream& is, fract& T)
{
	is >> T.tu >> T.mau;
	return is;
}
ostream& operator<<(ostream& os,const fract& T)
{
	if (T.mau == 1 || T.tu == 0) {
		os << T.tu;
		return os;
	}
	os << T.tu << "/" << T.mau;
	return os;
}
long long fract::gcd(long long a, long long b)
{
	if (a == 0) return b;
	return gcd(b % a, a);
}
