#include "CSoldiers.h"
#include <iostream>

using namespace std;

Soldiers::Soldiers()
{
}

Soldiers::Soldiers(int c)
{
	Color = c;
}

Soldiers::Soldiers(int a, int b)
{
	x = a;
	y = b;
	if (y >= 0 && y <= 4)
		Color = 0;
	if (y >= 5 && y <= 9) {
		Color = 1;
	}
}

bool Soldiers::check(int xx, int yy, Board b)
{
	if (xx < 0 || xx> 8 || yy < 0 || yy > 9)
		return false;
	if (Col() == 0) {
		if (x < 5)
			if (!(xx == (x + 1) && yy == y))
				return false;
		if (x >= 5)
			if (!((xx == (x + 1) && yy == y) || (yy == y && abs(xx - x) == 1)))
				return false;
	}
	else
	{
		if (x >= 5)
			if (!(xx == (x + 1) && yy == y))
				return false;
		if (x < 5)
			if (!((xx == (x + 1) && yy == y) || (yy == y && abs(xx - x) == 1)))
				return false;
	}
	if (b.a[xx][yy] != NULL && b.a[xx][yy]->Col() == Color)
		return false;
	return true;
}

void Soldiers::move(Board& b)
{
	cout << "Enter destination (Soldiers):";
	ChessMan::move(b);
}