#include "CChessMan.h"
#include <string>
#include <iostream>

using namespace std;

int ChessMan::isDead()
{
	return dead;
}

void ChessMan::die()
{
	dead = 1;
}

int ChessMan::Col()
{
	return Color;
}

void ChessMan::move(Board& b)
{
	int xx, yy;
	cin >> xx >> yy;
	while (check(xx, yy, b) == false) {
		cout << "Invalid! Again:";
		cin >> xx >> yy;
	}

	if (b.a[xx][yy] != NULL)
		b.a[xx][yy]->die();

	b.a[xx][yy] = b.a[x][y];
	b.a[x][y] = NULL;

	x = xx;
	y = yy;
}


bool ChessMan::check(Board b)
{
	return true;
}

bool ChessMan::check(int xx, int yy, Board b)
{
	return false;
}

string ChessMan::getViTri()
{
	return '(' + to_string(x) +","+ to_string(y) + ')';
}
