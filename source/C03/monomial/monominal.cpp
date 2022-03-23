#include "monominal.h"
#include <iostream>
#include <string>

using namespace std;

long long monominal::getCoeff()
{
    return coefficient;
}

void monominal::setCoeff(long long x)
{
    coefficient = x;
}

void monominal::push_back(string new_variable, long long new_exponent)
{
    this->variable.push_back(new_variable);
    this->exponent.push_back(new_exponent);
}

void monominal::sort_variables_by_exp()
{
    for (int i = 0; i < exponent.size() - 1; ++i)
    {
        for (int j = i + 1; j < exponent.size(); ++j)
            if (exponent[i] > exponent[j] || (exponent[i] > exponent[j] && variable[i] > variable[j]))
            {
                swap(exponent[i], exponent[j]);
                swap(variable[i], variable[j]);
            }
    }
}

bool isNumber(char c)
{
    return '0' <= c && c <= '9';
}

bool isChar(char c)
{
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}

monominal parse_input(const string input)
{
    monominal temp;
    for (int i = 0; i < input.size(); ++i)
    {
        if (isNumber(input[i]))
        {
            long long coeff = 0;
            while (isNumber(input[i]))
            {
                coeff = coeff * 10 + (input[i] - '0');
                i++;
            }
            i--;
            temp.setCoeff(temp.getCoeff() * coeff);
        }
        else if (isChar(input[i]) && input[i] != '^' && input[i] != '(' && input[i] != ')')
        {
            string new_variable = {input[i], '\0'};
            if (i + 1 < input.size() && input[i + 1] == '^')
            {
                i = i + 3;
                long long new_exponent = 0;
                while (isNumber(input[i]))
                {
                    new_exponent = new_exponent * 10 + (input[i] - '0');
                    i++;
                }
                temp.push_back(new_variable,new_exponent);
            }
            else
            {
                temp.push_back(new_variable, 1);
            }
        }
    }
    return temp;
}

istream &operator>>(istream &is, monominal &T)
{
    string monominal_input;
    is >> monominal_input;
    T = parse_input(monominal_input);
    T.sort_variables_by_exp();
    return is;
}

ostream& operator<<(ostream& os, const monominal& T)
{
    os << T.coefficient << "*";
    for (int i = 0; i < T.variable.size(); ++i)
    {
        os << T.variable[i] << "^(" << T.exponent[i] << ")";
        if (i != T.variable.size() - 1) {
            os << "*";
        }
    }
    return os;
    return os;
}
