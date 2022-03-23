#include <iostream>

class vector
{
private:
	double* x = NULL;
	int size = 0;
	vector* pnext = NULL;
public:
	friend class ListOfVector;
	void resize(int newsize);
	double norm();
	void assign();
	void assign(int newsize);
	vector translation(vector b);
	friend vector operator+(const vector& a, const vector& b);
	friend vector operator-(const vector& a, const vector& b);
	friend std::ostream& operator<<(std::ostream& os, const vector& T);
	friend std::istream& operator>>(std::istream& is, vector &T);
};

class ListOfVector
{
private:
	vector* head = NULL;
	vector* tail = NULL;
public:
	int size;
	vector& operator[](int i);
	void push_back(vector* T);
	void sort_by_norm();
};