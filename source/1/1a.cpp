#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> arr;
int n;

void task_a()
{
    cin >> n;
    arr.resize(n);
    for (auto &i : arr)
        cin >> i;
    sort(arr.begin(), arr.end());
    for (auto i : arr)
        cout << i << " ";
}

int main()
{
    task_a();
    return 0;
}
