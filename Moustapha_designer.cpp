#include <iostream>
using namespace std;

int P(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or (i == 0 and j != c - 1) or (i == 1) or (j == c - 1 and i > 1 and i < m) or (j == c - 2 and i <= m) or (i == m - 1) or (i == m and j < c - 1))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }

    cout << " ";
}
int A(int c, int m, int i)
{
    for (int j = 0; j <= c; j++)
    {
        if ((j == 0 and i > 2) or (j == c - 1 and i > 2) or (j == 1 and i > 2) or (j == c - 2 and i > 2) or (i == m and j < c - 1) or (i == m + 1 and j < c - 1) or (i == 2 and j > 0 and j < c - 1) or (i == 0 and j > 3 and j < c - 4) or (i == 1 and j > 1 and j < c - 2))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
}
int S(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((i == 0 and j != 0) or (i != 0 and j == 0 and i < m) or (i == m and j != 0 and j != c - 1) or (i == (c - 1) and j != c - 1 and j != 0) or (j == (c - 1) and i > m and i != c - 1) or (i == 1 and j != 0) or (i != 0 and j == 1 and i < m) or (i == m + 1 and j != 0 and j != c - 1 and j != 1) or (i == (c - 2) and j != c - 1 and j != 0) or (j == (c - 2) and i > m and i != c - 1))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << " ";
}
int O(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((i != 0 and j == 0 and i != c - 1) or (i == 0 and j != c - 1 and j != 0) or (i == c - 1 and j != 0 and j != c - 1) or (j == c - 1 and i != 0 and i != c - 1) or (i != 0 and j == 1 and i != c - 1) or (i == 1 and j != c - 1 and j != 0) or (i == c - 2 and j != 0 and j != c - 1) or (j == c - 2 and i != 0 and i != c - 1))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << " ";
}
int H(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == c - 1 or j == 1 or j == c - 2 or i == m or i == m - 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << " ";
}
int U(int c, int m, int i)
{
    if (c % 2 == 0)
    {
        c += 2;
    }
    for (int j = -1; j < c; j++)
    {
        if ((j == 1 and i <= c - 3) or (j == 0 and i <= c - 3) or (j == c - 2 and i <= c - 3) or (j == c - 3 and i <= c - 2) or (i == c - 2 and j > 0 and j < c - 2) or (i == c - 1 and j > 1 and j < c - 3))
        {
            cout << "*";
        }

        else
        {
            cout << " ";
        }
    }
    cout << " ";
}

int M(int c, int m, int i)
{
    for (int t = 0; t < c; t++)
    {
        if (t == 0 or t == (c - 1) or (i == t and i <= (m)) or ((i == t + 1 and i <= (m + 1))) or (i == (c - 1) - t and i <= m) or (i == c - t and i <= (m + 1)) or (t == 1 and i >= 1) or (t == (c - 2) and i >= 1))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << " ";
}
int T(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (((i == 0 or i == 1) and j != (c - 1)) or j == m or j == m - 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << " ";
}
int AB(int c)
{
    if (c % 2 == 0)
    {
        c += 1;
    }
    int m = c / 2;
    for (int i = 0; i < c; i++)
    {
        
       
        M(c,m,i);
        O(c,m,i);
        U(c,m,i);
        S(c,m,i);
        T(c,m,i);
        A(c,m,i);
        P(c,m,i);
        H(c,m,i);
        A(c,m,i);
        cout << endl;
    }
}

int main()
{
    AB(9);
    return 0;
}
