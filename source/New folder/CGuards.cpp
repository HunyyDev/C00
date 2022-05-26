#include "CGuards.h"
#include <iostream>

using namespace std;

Guards::Guards()
{
}

Guards::Guards(int c)
{
	Color = c;
}

Guards::Guards(int a, int b)
{
	x = a;
	y = b;
	if (y >= 0 && y <= 4)
		Color = 0;
	if (y >= 5 && y <= 9) {
		Color = 1;
	}
}

bool Guards::check(int xx, int yy, Board b)
{
	if (!(abs(xx - x) == 1 && abs(yy - y) == 1))
		return false;
	if (xx > 5 || xx < 3)
		return false;
	if (Color == 0) {
		if (yy < 0 || yy>2)
			return false;
	}
	else {
		if (yy > 9 || yy < 7)
			return false;
	}
	if (b.a[xx][yy] != NULL && b.a[xx][yy]->Col() == Color)
		return false;
	return true;
}

void Guards::move(Board& b)
{
	cout << "Enter destination (Guards):";
	ChessMan::move(b);
}