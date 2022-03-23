#include <iostream>
#include <vector>

using namespace std;

class monominal
{
private:
    long long coefficient = 1;
    vector<long long> exponent;
    vector<string> variable;
    // a monominal: product_coefficient[variable0)^(exponent0) * (variable1)^(exponent1) * ....]
public:
    long long getCoeff();
    void setCoeff(long long);
    friend istream &operator>>(istream &, monominal &);
    friend ostream &operator<<(ostream &, const monominal &);
    friend monominal parse_input(string);
    void push_back(string, long long);
};

bool isNumber(char);
bool isChar(char);