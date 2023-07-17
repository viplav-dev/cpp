// https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i) - 1; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (stars >= 6)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    int start = 1;
    for (int i = 1; i <= n; i++)
    {
        start = i % 2 ? 1 : 0;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            if (j <= i)
            {
                cout << j;
            }
            if (j > i && j <= 2 * n - i)
            {
                cout << ' ';
            }
            if (j >= 2 * n - i)
            {
                cout << (2 * n - j);
            }
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << ' ';
            count++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char chr = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << chr;
            chr++;
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = n; i >= 1; i--)
    {
        char chr = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << chr;
            chr++;
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        char chr = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << chr;
        }
        chr++;
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of iterations ";
    cin >> n;

    // pattern1(n);
    // pattern2(n);
    // pattern3(n);
    // pattern4(n);
    // pattern5(n);
    // pattern6(n);
    // pattern7(n);
    // pattern8(n);
    // pattern9(n);
    // pattern10(n);
    // pattern11(n);
    // pattern12(n);
    // pattern13(n);
    // pattern14(n);
    // pattern15(n);
    pattern16(n);
    return 0;
}
