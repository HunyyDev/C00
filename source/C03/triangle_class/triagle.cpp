#include "triagle.h"
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

Diem::Diem() {};

Diem::Diem(float a, float b) : x(a), y(b) {};

void Diem::TinhTien(float vx, float vy)
{
	x += vx;
	y += vy;
}

float distance(const Diem& A, const Diem& B)
{
	return sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
}

istream& operator>>(istream& is, Diem& T)
{
	is >> T.x >> T.y;
	return is;
}

void TinhCV(TamGiac& T)
{
	T.c = distance(T.A, T.B) + distance(T.A, T.C) + distance(T.B, T.C);
}

void TinhDT(TamGiac& T)
{
	float d1 = distance(T.A, T.B);
	float d2 = distance(T.B, T.C);
	float d3 = distance(T.C, T.A);
	float p = (d1 + d2 + d3) / 2;
	T.s = sqrt(p * (p - d1) * (p - d2) * (p - d3));
}
void TinhTien(float va, float vb, TamGiac& T)
{
	T.A.TinhTien(va, vb);
	T.B.TinhTien(va, vb);
	T.C.TinhTien(va, vb);
}

istream& operator>>(istream& is, TamGiac& T)
{
	is >> T.A >> T.B >> T.C;
	return is;
}

void TamGiac::Xuat()
{
	cout << "A(" << A.x << "," << A.y << ") ";
	cout << "B(" << B.x << "," << B.y << ") ";
	cout << "C(" << C.x << "," << C.y << ") ";
	cout << "\n";
}
