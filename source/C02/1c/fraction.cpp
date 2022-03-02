#include <iostream>
#include "fraction.h"

long long gcd(long long a, long long b)
{
	if (a == 0) return b;
	return gcd(b % a, a);
}

void ps::Nhap()
{
	std::cin >> tu >> mau;
}
void ps::HopThucHoa()
{
	if (mau < 0) {
		tu *= -1;
		mau *= -1;
	}
}
void ps::RutGon()
{
	long long temp = gcd(llabs(tu), llabs(mau));
	tu /= temp;
	mau /= temp;
}
void ps::Xuat()
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
ps ps::Cong(ps B)
{
	long long newtu = tu * B.mau + B.tu * mau;
	long long newmau = mau * B.mau;
	ps re = { newtu, newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

ps ps::Tru(ps B)
{
	long long newtu = tu * B.mau - B.tu * mau;
	long long newmau = mau * B.mau;
	ps re = { newtu, newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

ps ps::Nhan(ps B)
{
	long long newtu = tu * B.tu;
	long long newmau = mau * B.mau;
	ps re = { newtu,newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

ps ps::Chia(ps B)
{
	long long newtu = tu * B.mau;
	long long newmau = mau * B.tu;
	ps re = { newtu,newmau };
	re.HopThucHoa();
	re.RutGon();
	return re;
}

bool ps::LonHon(ps B) {
	return tu / mau > B.tu / B.mau;
}