#include "CBoard.h"

#include "CRooks.h"
#include "CKing.h"
#include "CGuards.h"
#include "CKnights.h"
#include "CBishops.h"
#include "CSoldiers.h"
#include "CCannons.h"

#include<iostream>

using namespace std;


Board::Board()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			a[i][j] = NULL;
		}
	}
	a[0][0] = new Rooks(0, 0);
	a[0][8] = new Rooks(8, 0);
	a[9][0] = new Rooks(0, 9);
	a[9][8] = new Rooks(8, 9);

	a[0][1] = new Knights(1, 0);
	a[0][7] = new Knights(7, 0);
	a[9][1] = new Knights(1, 9);
	a[9][7] = new Knights(7, 9);

	a[0][2] = new Bishops(2, 0);
	a[0][6] = new Bishops(6, 2);
	a[9][2] = new Bishops(2, 9);
	a[9][6] = new Bishops(6, 9);

	a[0][3] = new Guards(3, 0);
	a[0][5] = new Guards(5, 0);
	a[9][3] = new Guards(3, 9);
	a[9][5] = new Guards(5, 9);

	a[0][4] = new King(4, 0);
	a[9][4] = new King(4, 9);

	a[2][1] = new Cannons(1, 2);
	a[2][7] = new Cannons(7, 2);
	a[7][1] = new Cannons(1, 7);
	a[7][7] = new Cannons(7, 7);

	a[3][0] = new Soldiers(0, 3);
	a[3][2] = new Soldiers(2, 3);
	a[3][4] = new Soldiers(4, 3);
	a[3][6] = new Soldiers(6, 3);
	a[3][8] = new Soldiers(8, 3);

	a[6][0] = new Soldiers(0, 6);
	a[6][2] = new Soldiers(2, 6);
	a[6][4] = new Soldiers(4, 6);
	a[6][6] = new Soldiers(6, 6);
	a[6][8] = new Soldiers(8, 6);
}

void Board::Display()
{
}

