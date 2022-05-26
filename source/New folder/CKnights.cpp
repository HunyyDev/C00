#include "CKnights.h"
#include <iostream>

using namespace std;

Knights::Knights()
{
}

Knights::Knights(int c)
{
	Color = c;
}

Knights::Knights(int a, int b)
{
	x = a;
	y = b;
	if (y >= 0 && y <= 4)
		Color = 0;
	if (y >= 5 && y <= 9) {
		Color = 1;
	}
}

bool Knights::check(int xx, int yy, Board b)
{
	if (xx < 0 || xx> 8 || yy < 0 || yy > 9)
		return false;
	if (!((abs(xx - x) == 2 && abs(yy - y) == 1) || (abs(xx - x) == 1 && abs(yy - y) == 2)))
		return false;

	int xgiua = x;
	int ygiua = y;
	if (xx - x == 2)
		xgiua = x + 1;
	if (x - xx == 2)
		xgiua = x - 1;
	if (yy - y == 2)
		ygiua = y + 1;
	if (y - yy == 2)
		ygiua = y - 1;
	if (b.a[xgiua][ygiua] != NULL)
		return false;

	if (b.a[xx][yy] != NULL && b.a[xx][yy]->Col() == Color)
		return false;
	return true;
}

void Knights::move(Board& b)
{
	cout << "Enter destination (Knights):";
	ChessMan::move(b);
}