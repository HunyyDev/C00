#pragma once
#include"CBoard.h"
#include <string>

using namespace std;

class ChessMan
{
protected:
	int x, y;
	int Color;
	int dead = 0;
public:
	int isDead();
	void die();
	int Col();

	virtual void move(Board& b);
	virtual bool check(Board b);
	bool check(int xx, int yy, Board b);

	string getViTri();
};