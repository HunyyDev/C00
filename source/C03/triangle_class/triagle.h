#include <iostream>
using namespace std;

class Diem
{
private:
	float x = 0, y = 0;
public:
	Diem(float a, float b);
	Diem();
	void TinhTien(float vx, float vy);
	friend float distance(const Diem& A, const Diem& B);
	friend istream& operator>>(istream& is, Diem& T);
	friend class TamGiac;
};

class TamGiac
{
private:
	Diem A, B, C;
public:
	float c, s, v;
	friend void TinhCV(TamGiac&);
	friend void TinhDT(TamGiac&);
	friend void TinhTien(float va, float vb, TamGiac& T);
	friend istream& operator>>(istream& is, TamGiac& T);
	void Xuat();
};



