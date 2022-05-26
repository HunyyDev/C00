#pragma once
#include "CChessMan.h"
class Guards : public ChessMan
{
public:
	Guards();
	Guards(int c);
	Guards(int a, int b);

	bool check(int xx, int yy, Board b);
	void move(Board& b);
};