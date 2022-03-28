#include<iostream>
#include<string>

using namespace std;

class date
{
private:
	int ngay, thang, nam;
public:
	friend istream& operator>>(istream& is, date& T);
};

class student
{
private:
	string mssv;
	string hoten;
	int gioitinh;
	float toan, van, anh;
public:
	student();
	student(string, string, int, float, float, float);
	float getDiem();
	float getGioitinh();
	float getDiemNhoNhat();
	friend istream& operator>>(istream& is, student& T);
	friend ostream& operator<<(ostream& os, student T);
};