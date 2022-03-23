#include "complex.h"
#include <iostream>
#include <cmath>

istream& operator>>(istream& is, complex& T)
{
	is >> T.real >> T.imag;
	return is;
}

ostream& operator<<(ostream& os, const complex& T)
{
	os << T.real << " + " << T.imag << "i";
	return os;
}

complex operator+(const complex& A, const complex& B)
{
	return { A.real + B.real, A.imag + B.imag };
}

complex operator-(const complex& A, const complex& B)
{
	return { A.real - B.real, A.imag - B.imag };
}

complex operator*(const complex& A, const complex& B)
{
	return { A.real * B.real - A.imag * B.imag,A.real * B.imag + A.imag * B.real };
}

complex operator/(const complex& A, const complex& B)
{
	return { (A.real * B.real + A.imag * B.imag) / (B.real * B.real + B.imag * B.imag)
		,(B.real * A.imag - A.real * B.imag) / (B.real * B.real + B.imag * B.imag) };
}

complex::complex()
{
}

complex::complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}

double complex::abs(const complex& A)
{
	return sqrt(pow(A.real, 2) + pow(A.imag, 2));
}
