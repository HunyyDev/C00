#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

class employee
{
public:
    string mnv, hoten, phongban;
    long long luongcb, thuong, thuclanh;
    void Nhap()
    {
        cin >> mnv;
        cin.ignore();
        getline(cin, hoten);
        getline(cin, phongban);
        cin >> luongcb >> thuong;
        thuclanh = luongcb + thuong;
    }
};

vector<employee> arr;
int n;

void EnterData()
{
    cin >> n;
    arr.resize(n);
    for (auto &person : arr)
    {
        person.Nhap();
    }
}

void task_a()
{
    long long tongthang = 0;
    for (auto person : arr)
    {
        tongthang += person.thuclanh;
    }
    cout << "Tong thuc lanh thang cua toan bo nhan vien la: " << tongthang << "\n";
}

void task_b()
{
    vector<employee> record;
    long long min = 1e9;
    for (auto person : arr)
    {
        if (min > person.luongcb)
        {
            min = person.luongcb;
            record.clear();
            record.push_back(person);
        }
        else if (min == person.luongcb)
        {
            record.push_back(person);
        }
    }
    cout << "Danh sach nhan vien co muc luong co ban thap nhat:\n";
    for (auto person : record)
    {
        cout << person.mnv << "\t" << person.hoten << "\n";
    }
}

void task_c()
{
    int cnt = 0;
    for (auto person : arr)
    {
        if (person.thuong >= 1200000)
            cnt++;
    }
    cout << "So luong nhan vien co muc thuong tu 1200000: " << cnt << "\n";
}

bool compare(employee a, employee b)
{
    return (a.phongban < b.phongban) || (a.phongban == b.phongban && a.mnv < b.mnv);
}

void task_d()
{
    sort(arr.begin(), arr.end(), compare);
    cout << "Danh sach nhan vien theo thu tu phong ban giam dan:\n";
    for (auto person : arr)
    {
        cout << person.hoten << "\t" << person.mnv << "\t" << person.phongban << "\n";
    }
}

int main()
{
    EnterData();
    task_a();
    task_b();
    task_c();
    task_d();
    return 0;
}