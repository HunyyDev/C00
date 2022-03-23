#include "date.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, date& T)
{
	is >> T.day >> T.month >> T.year;
	return is;
}

ostream& operator<<(ostream& os, const date& T)
{
	if (T.day < 10) {
		os << "0" << T.day;
	}
	else
	{
		os << T.day;
	}
	if (T.month < 10)
	{
		os << "/0" << T.month << "/";
	}
	else
	{
		os << T.month << "/";
	}
	os << T.year;
	return os;
}

date::date(const int& d, const int& m, const int& y)
{
	day = d;
	month = m;
	year = y;
}

date::date()
{
}
