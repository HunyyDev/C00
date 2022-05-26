#pragma once

class ChessMan;

class Board
{
public:
	ChessMan* a[10][9];
	Board();

	void Display();
};