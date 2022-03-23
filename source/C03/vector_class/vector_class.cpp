#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "vector.h"

using namespace std;

ListOfVector A;

void Input()
{
	cin >> A.size;
	for (int i = 0; i < A.size; ++i)
	{
		vector* T = new vector;
		cin >> *T;
		A.push_back(T);
	}
}

void Output()
{
	for (int i = 0; i < A.size; ++i)
	{
		cout << A[i] << "\n";
	}
}


int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	Input();
	A.sort_by_norm();
	Output();
	return 0;
}