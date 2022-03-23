#include <string>

using namespace std;

class date
{
private:
	int day = 0, month = 0, year = 0;
public:
	date(const int&, const int&, const int&);
	date();
	friend istream& operator>>(istream& is, date& T);
	friend ostream& operator<<(ostream& os, const date& T);
};