#include <iostream>
using namespace std;
int bin_to_dec(int b)
{
    int d = 0, k = 0, r;
    while (b != 0)
    {
        r = b % 10;
        if (r < 0 or r > 1)
        {
            return 0;
        }
        else
        {
            d = d + r * pow(2, k);
            b = (b - r) / 10;
            k++;
        }
    }
    return d;
}
int oct_to_dec(int b)
{
    int d = 0, k = 0, r;
    while (b != 0)
    {
        r = b % 10;
        if (r < 0 or r > 7)
        {
            return 0;
        }
        else
        {
            d = d + r * pow(8, k);
            b = (b - r) / 10;
            k++;
        }
    }
    return d;
}
int Hex_to_dec(string b)
{
    int d = 0, m = 0;
    for (int i = 0; i < b.length(); i++)
    {
        char k = b[b.length() - 1 - i];

        switch (k)
        {
        case 'A':
            d += pow(16, m) * 10;
            break;
        case 'B':
            d += pow(16, m) * 11;
            break;
        case 'C':
            d += pow(16, m) * 12;
            break;
        case 'D':
            d += pow(16, m) * 13;
            break;
        case 'E':
            d += pow(16, m) * 14;
            break;
        case 'F':
            d += pow(16, m) * 15;
            break;
        case '0':
            d += pow(16, m) * 0;
            break;
        case '1':
            d += pow(16, m) * 1;
            break;
        case '2':
            d += pow(16, m) * 2;
            break;
        case '3':
            d += pow(16, m) * 3;
            break;
        case '4':
            d += pow(16, m) * 4;
            break;
        case '5':
            d += pow(16, m) * 5;
            break;
        case '6':
            d += pow(16, m) * 6;
            break;
        case '7':
            d += pow(16, m) * 7;
            break;
        case '8':
            d += pow(16, m) * 8;
            break;
        case '9':
            d += pow(16, m) * 9;
            break;
        }
        m += 1;
    }
    return d;
}

string dec_to_bin(int d)
{
    string bin, bin1;
    int b;
    do
    {
        b = d % 2;
        d = d / 2;
        switch (b)
        {
        case 1:
            bin += "1";
            break;
        case 0:
            bin += "0";
            break;
        }
    } while (d != 0);
    for (int i = bin.length() - 1; i >= 0; i--)
    {
        bin1 += bin[i];
    }
    return bin1;
}

string dec_to_oct(int d)
{
    string oct, oct1;
    int o;
    do
    {
        o = d % 8;
        d = d / 8;
        switch (o)
        {
        case 0:
            oct += "0";
            break;
        case 1:
            oct += "1";
            break;
        case 2:
            oct += "2";
            break;
        case 3:
            oct += "3";
            break;
        case 4:
            oct += "4";
            break;
        case 5:
            oct += "5";
            break;
        case 6:
            oct += "6";
            break;
        case 7:
            oct += "7";
            break;
        }
    } while (d != 0);
    for (int i = oct.length() - 1; i >= 0; i--)
    {
        oct1 += oct[i];
    }
    return oct1;
}

string dec_to_Hex(int d)
{
    string hex, hex1;
    int h;
    do
    {
        h = d % 16;
        d = d / 16;
        switch (h)
        {
        case 0:
            hex += "0";
            break;
        case 1:
            hex += "1";
            break;
        case 2:
            hex += "2";
            break;
        case 3:
            hex += "3";
            break;
        case 4:
            hex += "4";
            break;
        case 5:
            hex += "5";
            break;
        case 6:
            hex += "6";
            break;
        case 7:
            hex += "7";
            break;
        case 8:
            hex += "8";
            break;
        case 9:
            hex += "9";
            break;
        case 10:
            hex += "A";
            break;
        case 11:
            hex += "B";
            break;
        case 12:
            hex += "C";
            break;
        case 13:
            hex += "D";
            break;
        case 14:
            hex += "E";
            break;
        case 15:
            hex += "F";
            break;
        }
    } while (d != 0);
    for (int i = hex.length() - 1; i >= 0; i--)
    {
        hex1 += hex[i];
    }
    return hex1;
}

int main()
{
    int n, x;
    cout << " --    Programme Convert  Codage  --" << endl
         << "{1} : bin  to " << endl
         << "{2} : oct  to " << endl
         << "{3} : hex  to " << endl
         << "{4} : dec  to " << endl;

    cout << "Enter number 1 to 4 : ";
    cin >> n;

    if (n == 1)
    {
        cout << "Enter The binary number : ";
        cin >> x;
        cout << endl
             << endl;
        int t = bin_to_dec(x);
        cout << " Bin  : " << x << endl;
        cout << " Dec  : " << t << endl;
        cout << " Oct  : " << dec_to_oct(t) << endl;
        cout << " Hex  : " << dec_to_Hex(t);
        cout << endl
             << endl;
        cout << "---- Thank you ----";
    }
    else if (n == 2)
    {
        cout << "Enter The octal number : ";
        cin >> x;
        cout << endl
             << endl;
        int t = oct_to_dec(x);
        cout << " Bin  : " << dec_to_bin(t) << endl;
        cout << " Dec  : " << t << endl;
        cout << " Oct  : " << x << endl;
        cout << " Hex  : " << dec_to_Hex(t);
        cout << endl
             << endl;
        cout << "---- Thank you ----";
    }
    else if (n == 3)
    {
        string r;
        cout << "Enter The hex_decimal number : ";
        cin >> r;
        cout << endl
             << endl;
        int t = Hex_to_dec(r);
        cout << " Bin  : " << dec_to_bin(t) << endl;
        cout << " Dec  : " << t << endl;
        cout << " Oct  : " << dec_to_oct(t) << endl;
        cout << " Hex  : " << r;
        cout << endl
             << endl;
        cout << "---- Thank you ----";
    }
    else if (n == 4)
    {
        cout << "Enter The decimal number : ";
        cin >> x;
        cout << endl
             << endl;
        cout << " Bin  : " << dec_to_bin(x) << endl;
        cout << " Dec  : " << x << endl;
        cout << " Oct  : " << dec_to_oct(x) << endl;
        cout << " Hex  : " << dec_to_Hex(x);
        cout << endl
             << endl;
        cout << "---- Thank you ----";
    }
}
