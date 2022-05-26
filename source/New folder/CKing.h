#pragma once
#include"CChessMan.h"

using namespace std;

class King : public ChessMan
{
public:
	King();
	King(int c);
	King(int a, int b);
	bool check(int xx, int yy, Board b);
	void move(Board& b);
};