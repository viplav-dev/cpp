// https://cses.fi/problemset/task/1069

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string str;
    int tmp = 1;
    int count = 1;
    cin >> str;

    for (int i = 1; i <= str.size(); i++)
    {
        if (str[i - 1] != str[i])
        {
            count = max(tmp, count);
            tmp = 1;
        }
        else
        {
            tmp++;
        }
    }
    cout << max(tmp, count);
}