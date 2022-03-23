#include <iostream>

using namespace std;

class complex
{
private:
	double real = 0, imag = 0;
public:
	complex();
	complex(double real, double imag);
	friend istream& operator>>(istream& is, complex& T);
	friend ostream& operator<<(ostream& os, const complex& T);
	friend complex operator+(const complex& A, const complex& B);
	friend complex operator-(const complex& A, const complex& B);
	friend complex operator*(const complex& A, const complex& B);
	friend complex operator/(const complex& A, const complex& B);
	double abs(const complex& A);
};