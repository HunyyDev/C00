#include "CBishops.h"
#include <iostream>

using namespace std;

Bishops::Bishops()
{
}

Bishops::Bishops(int c)
{
	Color = c;
}

Bishops::Bishops(int a, int b)
{
	x = a;
	y = b;
	if (y >= 0 && y <= 4)
		Color = 0;
	if (y >= 5 && y <= 9) {
		Color = 1;
	}
}

bool Bishops::check(int xx, int yy, Board b)
{
	if (xx < 0 || xx>8)
		return false;
	if (Color == 0) {
		if (yy < 0 || yy>4)
			return false;
	}
	else if (Color == 1) {
		if (yy < 5 || yy>9)
			return false;
	}
	if (!(abs(xx - x) == 2 && abs(yy - y) == 2))
		return false;

	int xgiua = (x + xx) / 2;
	int ygiua = (y + yy) / 2;
	if (b.a[xgiua][ygiua] != NULL)
		return false;

	if (b.a[xx][yy] != NULL && b.a[xx][yy]->Col() == Color)
		return false;
	return true;
}

void Bishops::move(Board& b)
{
	cout << "Enter destination (Bishop):";
	ChessMan::move(b);
}