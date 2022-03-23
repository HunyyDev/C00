#include "vector.h"
#include <iostream>
#include <algorithm>
#include <cmath>

void vector::assign()
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> *(x + i);
	}
}

void vector::resize(int newsize)
{
	size = newsize;
	x = (double*)calloc(newsize, sizeof(double));
}

double vector::norm()
{
	double s = 0;
	for (int i = 0; i < size; ++i)
	{
		s = s + pow(*(x + i), 2);
	}
	return sqrt(s);
}

vector operator+(const vector& a, const vector& b)
{
	if (a.size != b.size)
	{
		vector temp;
		std::cout << "Two vector not have equal size";
		return temp;
	}
	vector temp;
	temp.size = a.size;
	temp.resize(temp.size);
	for (int i = 0; i < a.size; ++i)
	{
		*(temp.x + i) = *(a.x + i) + *(b.x + i);
	}
	return temp;
}

vector vector::translation(vector b)
{
	return *this + b;
}

void vector::assign(int newsize)
{
	resize(newsize);
	assign();
}

vector operator-(const vector& a, const vector& b)
{
	if (a.size != b.size)
	{
		vector temp;
		std::cout << "Two vector not have equal size";
		return temp;
	}
	vector temp;
	memcpy(temp.x, a.x, a.size);
	temp.size = a.size;
	for (int i = 0; i < a.size; ++i)
	{
		*(temp.x + i) -= *(b.x + i);
	}
	return temp;
}

std::istream& operator>>(std::istream& is, vector& T)
{
	is >> T.size;
	T.resize(T.size);
	for (int i = 0; i < T.size; ++i)
	{
		is >> *(T.x + i);
	}
	return is;
}

std::ostream& operator<<(std::ostream& os, const vector& T)
{
	for (int i = 0; i < T.size; ++i) {
		os << *(T.x + i);
		if (i < T.size - 1) os << " ";
	}
	return os;
}

vector& ListOfVector::operator[](int x)
{
	if (x >= size)
	{
		std::cout << "Out of bound";
		return *head;
	}
	vector* p = head;
	while (x--)
	{
		p = p->pnext;
	}
	return *p;
}

void ListOfVector::push_back(vector* T)
{
	if (head == NULL)
	{
		head = tail = T;
	}
	else
	{
		tail->pnext = T;
		tail = T;
	}
}

void ListOfVector::sort_by_norm()
{
	for (auto i = head; i->pnext != NULL; i=i->pnext)
	{
		for (auto j = i->pnext; j != NULL; j=j->pnext)
		{
			if (i->norm() > j->norm())
			{
				std::swap(i->x, j->x);
				std::swap(i->size, j->size);
			}
		}
	}
}