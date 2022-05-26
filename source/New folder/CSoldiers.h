#pragma once
#include "CChessMan.h"

class Soldiers : public ChessMan
{
public:
	Soldiers();
	Soldiers(int c);

	Soldiers(int a, int b);
	bool check(int xx, int yy, Board b);
	void move(Board& b);
};