#include <iostream>
#include "fraction.h"

ps A, B;

int main()
{
	A.Nhap();
	B.Nhap();
	ps t;
	std::cout << "A + B = ";
	t = A.Cong(B);
	t.Xuat();
	std::cout << "\n";
	std::cout << "A - B = ";
	t = A.Tru(B);
	t.Xuat();
	std::cout << "\n";
	std::cout << "A * B = ";
	t = A.Nhan(B);
	t.Xuat();
	std::cout << "\n";
	std::cout << "A / B = ";
	t = A.Chia(B);
	t.Xuat();
	return 0;
}