#define _CRT_SECURE_NO_WARNIGNS
#include "student.h"
#include <iostream>
#include <vector>

using namespace std;

vector<student> MyList;

void input()
{
	//freopen("input.txt", "r", stdin);
	int n;
	cout << "Nhap n: ";
	cin >> n;
	MyList.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> MyList[i];
	}
}

void print1()
{
	for (int i = 0; i < MyList.size(); ++i)
	{
		if (MyList[i].getDiem() > 25)
			cout << MyList[i] << "\n";
	}
}

void print2()
{
	for (int i = 0; i < MyList.size(); ++i)
	{
		if (MyList[i].getDiem() > 28 && MyList[i].getGioitinh() == 0)
			cout << MyList[i] << "\n";
	}
}

void print3()
{
	for (int i = 0; i < MyList.size(); ++i)
	{
		if (MyList[i].getDiem() > 18 && MyList[i].getDiemNhoNhat() >= 3)
			cout << MyList[i] << "\n";
	}
}

int main()
{
	input();
	print1();
	print2();
	print3();
	return 0;
}