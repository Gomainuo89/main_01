#include <iostream>
using namespace std;
int main()
{
    string result;
    int x;
    cout << "Enter Chiffre : ";
    cin >> x;
    for (int i = 0; i < 4; i++)
    {
        int m;
        string a = " ";
        if (i == 1)
        {
            m = x % (1000);
        }
        else if (i == 0)
        {
            m = (x - (x % 1000)) / 1000;
        }
        //------------------------------

        int b = m % 10;
        int r = (m % 100 - b);
        int e = (m - r - b) / 100; //"cent"
        switch (e)
        {
        case 1:
            a += " cent ";
            break;
        case 2:
            a += " deux cent ";
            break;
        case 3:
            a += " trois cent ";
            break;
        case 4:
            a += " quatre cent ";
            break;
        case 5:
            a += " cinq cent ";
            break;
        case 6:
            a += " six cent ";
            break;
        case 7:
            a += " sept cent ";
            break;
        case 9:
            a += " neuf cent ";
            break;
        case 8:
            a += " quit cent ";
            break;
        default:
            a += " ";
        }
        int rr = r + b;
        if (rr < 20 and rr > 10)
        {
            switch (rr)
            {
            case 11:
                a += " Onez ";
                break;
            case 12:
                a += " douess";
                break;
            case 13:
                a += " triz";
                break;
            case 14:
                a += " quateurz";
                break;
            case 15:
                a += " quenz";
                break;
            case 16:
                a += " size";
                break;
            case 17:
                a += " dix spet";
                break;
            case 18:
                a += " dix quit";
                break;
            case 19:
                a += " dix neuf ";
                break;
            default:
                a += "";
            }
        }

        if (r != 10)
        {
            switch (r)
            {
            case 10:
                a += " dix ";
                break;
            case 20:
                a += " vingth ";
                break;
            case 30:
                a += " trante ";
                break;
            case 40:
                a += " quarente ";
                break;
            case 50:
                a += " ciquente ";
                break;
            case 60:
                a += " soitsonte ";
                break;
            case 70:
                a += " soisonte dix ";
                break;
            case 80:
                a += " quatre vingth  ";
                break;
            case 90:
                a += " quatre vingth dix ";
                break;
            default:
                a += "";
            }
        }
        if (rr >= 20 or rr < 10)
        {
            switch (b)
            {
            case 1:
                a += " Un ";
                break;
            case 2:
                a += " deux ";
                break;
            case 3:
                a += " trois ";
                break;
            case 4:
                a += " quatre ";
                break;
            case 5:
                a += " cinq ";
                break;
            case 6:
                a += " six ";
                break;
            case 7:
                a += " sept ";
                break;
            case 8:
                a += " quit ";
                break;
            case 9:
                a += " neuf ";
                break;
            default:
                a += "";
                break;
            }
        }
        if (i == 0 and x > 999)
        {
            a += " mille ";
            result += a;
        }
        if (i == 1)
        {
            result += a;
        }
    }

    cout << result;

    return 0;
}
