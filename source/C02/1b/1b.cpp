#include <iostream>
#include "fraction.h"

using namespace std;

ps A, B;

int main()
{
	A.Nhap();
	B.Nhap();
	if (A.LonHon(B))
	{
		A.Xuat(); 
	}
	else
	{
		B.Xuat();
	}
	cout << " lon hon";
	return 0;
}