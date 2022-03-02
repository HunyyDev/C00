#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> d = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class date {
    public:
        int dd, mm, yy, tmp;
    void EnterDay()
    {
        cin >> dd >> mm >> yy;
        tmp = yy % 400;
    }
    date yesterday()
    {
        int rd, rm, ry;
        if (dd == 1)
        {
            if (mm == 1)
            {
                rd = d[12];
                rm = 12;
                ry = yy - 1;
            }
            else
            {
                rd = d[mm - 1] + (tmp % 4 == 0 && tmp != 100 && tmp != 200 && tmp != 300 && mm - 1 == 2);
                rm = mm - 1;
                ry = yy;
            }
        }
        else
        {
            rd = dd - 1;
            rm = mm;
            ry = yy;
        }
        cout << "Ngay truoc: " << rd << " " << rm << " " << ry << "\n";
        return { rd,rm,ry };
    }

    date tomorrow()
    {
        int rd, rm, ry;
        if (dd == d[mm] + (tmp % 4 == 0 && tmp != 100 && tmp != 200 && tmp != 300 && mm == 2))
        {
            if (mm == 12)
            {
                rm = 1;
                rd = 1;
                ry = yy + 1;
            }
            else
            {
                rd = 1;
                rm = mm + 1;
                ry = yy;
            }
        }
        else
        {
            rd = dd + 1;
            rm = dd;
            ry = yy;
        }
        cout << "Ngay sau: " << rd << " " << rm << " " << ry << "\n";
        return { rd,rm,ry };
    }
    date Current()
    {
        cout << "Hien tai: " << dd << " " << mm << " " << yy << "\n";
        return { dd,mm,yy };
    }
};

date a;

int main()
{
    a.EnterDay();
    a.yesterday();
    a.Current();
    a.tomorrow();
    return 0;
}
