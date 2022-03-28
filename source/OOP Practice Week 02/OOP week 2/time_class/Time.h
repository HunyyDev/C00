#include<iostream>

using namespace std;

class Time
{
private:
	long long day, month, year, hour, minute, second;
public:
	bool is_valid();
	friend istream& operator>>(istream& is, Time& T);
	friend ostream& operator<<(ostream& os, Time T);
	bool is_leap_year();
	void add_second(long long sec);
};