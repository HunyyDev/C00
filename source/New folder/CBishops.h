#pragma once
#include "CChessMan.h"
class Bishops : public ChessMan
{
public:
	Bishops();
	Bishops(int c);
	Bishops(int a, int b);

	bool check(int xx, int yy, Board b);
	void move(Board& b);
};