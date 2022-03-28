#include "time.h"
#include <iostream>

using namespace std;

int DayOfMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

bool Time::is_valid()
{
	bool t1;
	if (year >= 0 && 1 <= month && month <= 12)
	{
		if (month == 2)
			t1 = 1 <= day && day <= DayOfMonth[month] + is_leap_year();
		else
			t1 = 1 <= day && day <= DayOfMonth[month];
	}
	else
		t1 = false;
	bool t2;
	if (0 <= second && second <= 60 && 0 <= minute && minute <= 60 && 0 <= hour && hour <= 24)
		t2 = true;
	else
		t2 = false;
	return t1 && t2;
}

bool Time::is_leap_year()
{
	return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

void Time::add_second(long long sec)
{
	second += sec;
	if (second >= 60) {
		minute += second / 60;
		second %= 60;
	}
	if (minute >= 60) {
		hour += minute / 60;
		minute %= 60;
	}
	if (hour >= 24) {
		day += hour / 24;
		hour %= 24;
	}
	if (day > DayOfMonth[month] + (month == 2 && is_leap_year()))
	{
		while (day > DayOfMonth[month] + (month == 2 && is_leap_year()))
		{
			day -= DayOfMonth[month] + (month == 2 && is_leap_year());
			month++;
			if (month > 12) {
				month -= 12;
				year++;
			}
		}
	}
}

istream& operator>>(istream& is, Time& T)
{
	cout << "Nhap giay: ";
	is >> T.second;
	cout << "Nhap phut: ";
	is >> T.minute;
	cout << "Nhap gio: ";
	is >> T.hour;
	cout << "Nhap ngay: ";
	is >> T.day;
	cout << "Nhap thang: ";
	is >> T.month;
	cout << "Nhap nam: ";
	is >> T.year;
	return is;
}

ostream& operator<<(ostream& os, Time T)
{
	os << "giay: " << T.second << "\n";
	os << "phut: " << T.minute << "\n";
	os << "gio: " << T.hour << "\n";
	os << "ngay: " << T.day << "\n";
	os << "thang: " << T.month << "\n";
	os << "nam: " << T.year << "\n";
	return os;
}
