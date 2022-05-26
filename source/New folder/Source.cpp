#include <iostream>
#include "CPlayer.h"
#include "CBoard.h"

using namespace std;

int main()
{
	Player A, B;
	Board C;
	KhoiTao(A, B, C);

	int turn = 0;
	while (A.KingIsDead() == 0 && B.KingIsDead() == 0)
	{
		if (turn % 2 == 0)
		{
			cout << "Luot cua nguoi choi 1:\n";
			A.TakeTurn(C);
		}
		else
		{
			cout << "Luot cua nguoi choi 2:\n";
			B.TakeTurn(C);
		}
		turn++;
	}

	return 0;
}