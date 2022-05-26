#include "CRooks.h"
#include<iostream>

using namespace std;

Rooks::Rooks()
{
}

Rooks::Rooks(int c)
{
	Color = c;
}

Rooks::Rooks(int a, int b)
{
	x = a;
	y = b;
	if (y >= 0 && y <= 4)
		Color = 0;
	if (y >= 5 && y <= 9) {
		Color = 1;
	}
}

bool Rooks::check(int xx, int yy, Board b)
{
	if (xx < 0 || xx> 8 || yy < 0 || yy > 9)
		return false;
	if (!((xx != x && yy == y) || (xx == x && yy != y)))
		return false;
	if (xx == x) {
		if (yy > y) {
			for (int i = y + 1; i < yy; i++) {
				if (b.a[x][i] != NULL)
					return false;
			}
		}
		else if (yy < y) {
			for (int i = y - 1; i > yy; i--) {
				if (b.a[x][i] != NULL)
					return false;
			}
		}
	}
	if (yy == y) {
		if (xx > x) {
			for (int i = x + 1; i < xx; i++) {
				if (b.a[i][y] != NULL)
					return false;
			}
		}
		if (xx < x) {
			for (int i = x; i > xx; i--) {
				if (b.a[i][y] != NULL)
					return false;
			}
		}
	}
	if (b.a[xx][yy] != NULL && b.a[xx][yy]->Col() == Color)
		return false;
	return true;

}

void Rooks::move(Board& b)
{
	cout << "Enter destination (Rooks):";
	ChessMan::move(b);
}
