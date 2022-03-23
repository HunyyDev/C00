#define _CRT_SECURE_NO_WARNINGS
#include "Matrix.h"

using namespace std;

Matrix A, B;

int main()
{
	freopen("input.txt", "r", stdin);
	A.SetMatrix(2, 3);
	A.GetMatrix();
	cout << "\n";
	B.SetMatrix(3, 2);
	B.GetMatrix();
	cout << "\n";
	Matrix C = A * B;
	C.GetMatrix();
	return 0;
}