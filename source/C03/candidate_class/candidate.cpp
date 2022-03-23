#include "candidate.h"
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

istream& operator>>(istream& is, candidate& T)
{
	cout << "MSSV: ";
	is >> T.MSSV;
	is.ignore();
	cout << "Ho va ten: ";
	getline(is, T.Name);
	cout << "Ngay thang nam sinh:";
	is >> T.DateOfBirth;
	is.ignore();
	cout << "Diem mon toan: ";
	is >> T.toan;
	cout << "Diem mon van: ";
	is >> T.van;
	cout << "Diem mon anh: ";
	is >> T.anh;
	return is;
}

ostream& operator<<(ostream& os, const candidate& T)
{
	os << "MSSV: ";
	os << T.MSSV;
	os << "\nHo va ten: ";
	os << T.Name;;
	os << "\nNgay thang nam sinh:";
	os << T.DateOfBirth;
	os << "\nDiem mon toan: ";
	os << T.toan;
	os << "\nDiem mon van : ";
	os << T.van;
	os << "\nDiem mon anh: ";
	os << T.anh;
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

float candidate::GetTotalScore()
{
	return (toan + van + anh);
}
