#include "CPlayer.h"
#include "CBoard.h"
#include "CChessMan.h"
#include <iostream>

using namespace std;

void KhoiTao(Player& A, Player& B, Board C)
{
	A.list[0] = C.a[0][4];
	A.list[1] = C.a[0][3];
	A.list[2] = C.a[0][5];
	A.list[3] = C.a[0][2];
	A.list[4] = C.a[0][6];
	A.list[5] = C.a[0][1];
	A.list[6] = C.a[0][7];
	A.list[7] = C.a[0][0];
	A.list[8] = C.a[0][8];
	A.list[9] = C.a[2][1];
	A.list[10] = C.a[2][7];
	A.list[11] = C.a[3][0];
	A.list[12] = C.a[3][2];
	A.list[13] = C.a[3][4];
	A.list[14] = C.a[3][6];
	A.list[15] = C.a[3][8];

	B.list[0] = C.a[9][4];
	B.list[1] = C.a[9][3];
	B.list[2] = C.a[9][5];
	B.list[3] = C.a[9][2];
	B.list[4] = C.a[9][6];
	B.list[5] = C.a[9][1];
	B.list[6] = C.a[9][7];
	B.list[7] = C.a[9][0];
	B.list[8] = C.a[9][8];
	B.list[9] = C.a[7][1];
	B.list[10] = C.a[7][7];
	B.list[11] = C.a[6][0];
	B.list[12] = C.a[6][2];
	B.list[13] = C.a[6][4];
	B.list[14] = C.a[6][6];
	B.list[15] = C.a[6][8];
}

void Player::TakeTurn(Board B)
{
	cout << "Chon quan co muon di chuyen:\n";
	int LuaChon;
	for (int i = 0; i < 16; ++i)
	{
		if (list[i]->isDead() == 0)
		{
			switch (i)
			{
			case 0:
				cout << i << ".  Quan Tuong(Soai) " << list[i]->getViTri() << "\n";
				break;
			case 1:
				cout << i << ".  Quan Si " << list[i]->getViTri() << "\n";
				break;
			case 2:
				cout << i << ".  Quan Si " << list[i]->getViTri() << "\n";
				break;
			case 3:
				cout << i << ".  Quan Tuong " << list[i]->getViTri() << "\n";
				break;
			case 4:
				cout << i << ".  Quan Tuong " << list[i]->getViTri() << "\n";
				break;
			case 5:
				cout << i << ".  Quan Ma " << list[i]->getViTri() << "\n";
				break;
			case 6:
				cout << i << ".  Quan Ma " << list[i]->getViTri() << "\n";
				break;
			case 7:
				cout << i << ".  Quan Xe " << list[i]->getViTri() << "\n";
				break;
			case 8:
				cout << i << ".  Quan Xe " << list[i]->getViTri() << "\n";
				break;
			case 9:
				cout << i << ".  Quan Phao " << list[i]->getViTri() << "\n";
				break;
			case 10:
				cout << i << ".  Quan Phao " << list[i]->getViTri() << "\n";
				break;
			default:
				cout << i << ".  Quan Tot " << list[i]->getViTri() << "\n";
				break;
			}
		}
	}
	cout << "\nNhap lua chon: ";
	cin >> LuaChon;
	list[LuaChon]->move(B);
}

bool Player::KingIsDead()
{
	return list[0]->isDead();
}