#include "candidate.h"
#include <iostream>
#include <vector>

using namespace std;

vector<candidate> arr;

void input()
{
	int n;
	cout << "n = ";
	cin >> n;
	while (n--)
	{
		candidate T;
		cin >> T;
		arr.push_back(T);
	}
}

void output()
{
	cout << "SINH VIEN CO TONG DIEM > 15\n";
	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i].GetTotalScore() > 15)
		{
			cout << arr[i] << "\n";
		}
	}
}

int main()
{
	input();
	output();
	return 0;
}