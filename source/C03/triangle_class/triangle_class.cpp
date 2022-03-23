#define _CRT_SECURE_NO_WARNINGS
#include "triagle.h"
#include <iostream>


TamGiac T[100];
int n;

void Input()
{
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> T[i];
		TinhCV(T[i]);
		TinhDT(T[i]);
	}
}

void FindMaxC()
{
	int max = 0;
	for (int i = 1; i < n; ++i)
	{
		if (T[max].c < T[i].c)
		{
			max = i;
		}
	}
	cout << "Triagle with biggest C: ";
	T[max].Xuat();
}

void FindMinS()
{
	int min = 0;
	for (int i = 1; i < n; ++i)
	{
		if (T[min].c > T[i].c)
		{
			min = i;
		}
	}
	cout << "Triagle with smallest S: ";
	T[min].Xuat();
}

void TranslationWithV(int vx, int vy, TamGiac& T)
{
	TinhTien(vx, vy, T);
}

int main()
{
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//for demonstrating function above
	Input();
	FindMaxC();
	FindMinS();
	T[0].Xuat();
	TranslationWithV(5, 3, T[0]);
	T[0].Xuat();
	return 0;
}