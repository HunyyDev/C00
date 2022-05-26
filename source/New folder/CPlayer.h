#pragma once
class ChessMan;
class Board;

class Player
{
private:
	ChessMan* list[16];
	// [0]= King
	// [1] = [2] = Guards
	// [3] = [4] = Bishops
	// [5] = [6] = Knights
	// [7] = [8] = Rooks
	// [9] = [10] = Cannons
	// the rest is Soldiers 
public:
	void TakeTurn(Board);
	bool KingIsDead();

	friend void KhoiTao(Player&, Player&, Board);
};