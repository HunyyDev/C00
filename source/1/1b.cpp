#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point
{
    double x, y;
};

int n;
vector<Point> point;

void enterPoints()
{
    cin >> n;
    point.resize(n);
    for (auto &i : point)
        cin >> i.x >> i.y;
}

double distance(Point A, Point B)
{
    return pow((A.x - B.x), 2.0) + pow((A.y - B.y), 2.0);
}

void findLargestDistance()
{
    Point X, Y;
    double maxDistance = 0;
    for (int i = 0; i < point.size(); ++i)
    {
        for (int j = i + 1; j < point.size(); ++j)
        {
            if (maxDistance < distance(point[i], point[j]))
            {
                maxDistance = distance(point[i], point[j]);
                X = point[i];
                Y = point[j];
            }
        }
    }
    cout << X.x << " " << X.y << "\n"
         << Y.x << " " << Y.y;
}

int main()
{
    enterPoints();
    findLargestDistance();
    return 0;
}