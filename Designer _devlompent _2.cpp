#include <iostream>
#include <map>
#include <string>
/*



       Information about the programmer
       
           Name : Abd-Elouahab Moustapha
       
           Age  : 20 years Old 
           
           Country : Algerian 
           
           language : c++
       
       
*/


/*
         Information about the program
         
         
             The program is a code based on drawing a geometric shape by means of loops overlapping with each other in addition to the basic conditions in the C++ language.
         
*/
using namespace std;
int W(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((j == 0 and i != c - 1) or (j == 1) or (i == c - j and j < m) or (i == c - j - 1 and j < m + 1) or (i == j and j >= m) or (i == j - 1 and j > m) or (j == c - 2 or (j == c - 1 and i != c - 1)))
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
int Z(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (i == c - j or i == c - j - 1 or (i == 0 or (i == 1 and j < c)) or (i == c - 1 or i == c - 2))
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
int Y(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (i == c - j or i == c - j - 1 or (i == j and i < m) or (i == j - 1 and i < m + 1))
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
int X(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (i == j or i == j - 1 or i == c - j or i == c - j - 1)
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
int Q(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((j == c - 1 or j == c - 2) or (i == 0 and j > 0) or (i == 1) or (i < m and j == 0 and i > 0) or (i == m + 1 and j != 0) or (i == m))
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
int J(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((j == c - 3 and i != c - 1) or (j == c - 4) or (i == c - 1 and j > 0 and j < c - 4) or (i == c - 2 and j < c - 3) or (i == 0 and j > c - 8))
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
int V(int c, int m, int i)
{
    c = c + 1;
    for (int j = 0; j < c; j++)
    {
        if ((j == i + 1) or (i == 0 and j < 6) or (j == i + 2))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    for (int j = 0; j < c; j++)
    {
        if ((c - j == i + 2) or (c - j == i + 3) or (i == 0 and j > c - 6))
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
int R(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((j == 0) or (i == 0 and j != c - 1) or (j == c - 1 and i < m and i != 0) or (i == m and j != c - 1) or (i > m and 2 * (c - i) == c - j) or
            (j == 1) or i == 1 or (j == c - 2 and i < m and i != 0) or (i == m + 1 and j != c - 1) or (i > m and 2 * (c - i) == c - j + 1))
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
int N(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or i == j - 1 or (j) == i or j == c - 1 or j == c - 2)
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

int D(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or (i == 0 and j != c - 1) or (j == c - 1 and i > 0 and i < c - 1) or (i == c - 1 and j < c - 1) or
            j == 1 or (i == 1) or (j == c - 2) or (i == c - 2)

        )
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
int C(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if ((i == 0 and j > 0 and j < c - 2) or (j == 0 and i > 0 and i < c - 1) or (i == c - 1 and j > 1 and j < c - 2) or
            (i == 1 and j < c - 1) or (j == 1) or (i == c - 2 and j < c - 1))
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
int B(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or (i == 0 and j != c - 1) or (i > 0 and j == c - 1 and i != m and i < c - 1) or (i == m and j != c - 1) or (i == c - 1 and j != c - 1) or
            j == 1 or (i == 1) or (j == c - 2) or (i == m - 1 and j != c - 1) or (i == c - 2) or (i == m + 1 and j != c - 1))
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
int L(int c, int m, int i)
{
    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or (i == c - 1 and j != 0) or i == c - 2)
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
int K(int c, int m, int i)
{
    if (c % 2 == 0)
    {
        c += 1;
    }

    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or ((m - i + 2 == j) or (m - i + 1 == j) or (i - m + 2 == j and j > 2) or (i - m + 1 == j)))
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
}
int I(int c, int m, int i)
{
    if (c % 2 == 0)
    {
        c += 1;
    }

    for (int j = 0; j < c; j++)
    {
        if (i == 0 or i == 1 or i == c - 1 or i == c - 2 or j == m or j == m - 1)
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
int E(int c, int m, int i)
{
    if (c % 2 == 0)
    {
        c += 1;
    }

    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or i == 0 or i == 1 or i == m or i == m - 1 or i == c - 1 or i == c - 2)
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

int F(int c, int m, int i)
{
    if (c % 2 == 0)
    {
        c += 1;
    }

    for (int j = 0; j < c; j++)
    {
        if (j == 0 or j == 1 or i == 0 or i == 1 or i == m or i == m - 1)
        {
            cout << "*";
        }
        else
        {
            cout << " ";
        }
    }
    cout << "  ";
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
int es(int c , int m , int i){
    for(int j=0;j<2;j++){
        cout<<"   ";
    }
    cout<<" ";
}
typedef int (*FnPtr)(int, int, int);
void AB(int c, string name)
{
    string e;
    char q;

    string name1;

    for (int r = 0; r < name.length(); r++)
    {
        q = name[r];
        switch (q)
        {
        case ' ': 
            name1 += "@";
            break ;
        case 'a':
            name1 += 'A';
            break;
        case 'b':
            name1 += 'B';
            break;
        case 'c':
            name1 += 'C';
            break;
        case 'd':
            name1 += 'D';
            break;
        case 'e':
            name1 += 'E';
            break;
        case 'f':
            name1 += 'F';
            break;
        case 'g':
            name1 += 'G';
            break;
        case 'h':
            name1 += 'H';
            break;
        case 'i':
            name1 += 'I';
            break;
        case 'j':
            name1 += 'J';
            break;
        case 'k':
            name1 += 'K';
            break;
        case 'l':
            name1 += 'L';
            break;
        case 'm':
            name1 += 'M';
            break;
        case 'n':
            name1 += 'N';
            break;
        case 'o':
            name1 += 'O';
            break;
        case 'p':
            name1 += 'P';
            break;
        case 'q':
            name1 += 'Q';
            break;
        case 'r':
            name1 += 'R';
            break;
        case 's':
            name1 += 'S';
            break;
        case 't':
            name1 += 'T';
            break;
        case 'u':
            name1 += 'U';
            break;
        case 'v':
            name1 += 'V';
            break;
        case 'w':
            name1 += 'W';
            break;
        case 'x':
            name1 += 'X';
            break;
        case 'y':
            name1 += 'Y';
            break;
        case 'z':
            name1 += 'Z';
            break;
        default:
            name1 += q;
        }
    }
    name = name1;

    map<string, FnPtr> Wx;
    Wx["A"] = A;
    Wx["E"] = E;
    Wx["F"] = F;
    Wx["I"] = I;
    Wx["K"] = K;
    Wx["L"] = L;
    Wx["M"] = M;
    Wx["O"] = O;
    Wx["P"] = P;
    Wx["S"] = S;
    Wx["T"] = T;
    Wx["U"] = U;
    Wx["H"] = H;
    Wx["B"] = B;
    Wx["C"] = C;
    Wx["D"] = D;
    Wx["N"] = N;
    Wx["R"] = R;
    Wx["V"] = V;
    Wx["J"] = J;
    Wx["Q"] = Q;
    Wx["X"] = X;
    Wx["Y"] = Y;
    Wx["Z"] = Z;
    Wx["W"] = W;
    Wx["@"] = es;
    if (c % 2 == 0)
    {
        c += 1;
    }
    int m = c / 2;
    int rrr = 1;
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < name.length(); j++)
        {
            e = name[j];
            Wx[e](c, m, i);
        }
        cout << endl;
    }
}

int main()
{
    string name; 
    cout << "Enter the name : ";
    getline(cin,name);
    AB(9,name);
  //  string name_name ;
//    for(int i=0;i<name.length();i++){
//        if (name[i] == ' '){
//            
//            AB(9,name_name);
//            cout<<endl<<endl;
//            name_name="";
//            } 
//        else {
//            name_name += name[i];
//            }       
//    }
//    AB(9,name_name);

    return 0;
}

/*            600 Lines          */ 
