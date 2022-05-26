#pragma once
#include "CChessMan.h"

class Cannons : public ChessMan
{
public:
	Cannons();
	Cannons(int c);
	Cannons(int a, int b);

	bool check(int xx, int yy, Board b);
	void move(Board& b);
};