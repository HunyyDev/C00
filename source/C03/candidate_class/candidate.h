#include <string>
#include <iostream>
#include "date.h"

using namespace std;

// class date
// {
// private:
// 	int day = 0, month = 0, year = 0;
// public:
// 	date(const int&, const int&, const int&);
// 	date();
// 	friend istream& operator>>(istream& is, date& T);
// 	friend ostream& operator<<(ostream& os, const date& T);
// };

class candidate
{
private:
	string MSSV = "", Name = "";
	date DateOfBirth;
	float toan = 0, van = 0, anh = 0;
public:
	float GetTotalScore();
	friend istream& operator>>(istream& is, candidate& T);
	friend ostream& operator<<(ostream& os, const candidate& T);
};
