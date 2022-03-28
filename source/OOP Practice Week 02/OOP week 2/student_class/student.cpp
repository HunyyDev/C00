#include "student.h"
#include <iostream>

using namespace std;

istream& operator>>(istream& is, date& T)
{
	is >> T.ngay >> T.thang >> T.nam;
	return is;
}

istream& operator>>(istream& is, student& T)
{
	cout << "MSSV: ";
	is >> T.mssv;
	cout << "Ho va ten: ";
	is >> T.hoten;
	cout << "Gioi tinh (0 la nu, 1 la nam): ";
	is >> T.gioitinh;
	cout << "Diem toan: ";
	is >> T.toan;
	cout << "Diem van: ";
	is >> T.van;
	cout << "Diem anh: ";
	is >> T.anh;
	return is;
}

float student::getDiem()
{
	return toan + van + anh;
}

float student::getGioitinh()
{
	return gioitinh;
}

ostream& operator<<(ostream& os, student T)
{
	os << "MSSV: ";
	os << T.mssv;
	os << "Ho va ten: ";
	os << T.hoten;
	os << "Gioi tinh (0 la nu, 1 la nam): ";
	os << T.gioitinh;
	os << "Diem toan: ";
	os << T.toan;
	os << "Diem van: ";
	os << T.van;
	os << "Diem anh: ";
	os << T.anh;
	return os;
}

student::student()
{
	mssv = "";
	hoten = "";
	gioitinh = 0;
	toan = van = anh = 0;
}

student::student(string mssv, string hoten, int gioitinh, float toan, float van, float anh)
{
	this->mssv = mssv;
	this->hoten = hoten;
	this->gioitinh = gioitinh;
	this->toan = toan;
	this->van = van;
	this->anh = anh;
}

float student::getDiemNhoNhat()
{
	return min(anh,min(toan, van));
}
