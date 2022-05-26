#pragma once
#include "CChessMan.h"

class Knights : public ChessMan
{
public:
	Knights();
	Knights(int c);
	Knights(int a, int b);

	bool check(int xx, int yy, Board b);
	void move(Board& b);
};
