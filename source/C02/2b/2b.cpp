#include <iostream>

using namespace std;

class hs {
public:
	float toan, van, dtb;
	void XuatDtb()
	{
		cout << "Diem trung binh: " << dtb;
	}
	void Nhap()
	{
		cin >> toan >> van;
		dtb = (toan + van) / 2;
	}
};

hs A;

int main()
{
	A.Nhap();
	A.XuatDtb();
	return 0;
}