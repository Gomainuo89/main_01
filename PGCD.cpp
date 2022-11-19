
// programm Calcul pgcd

#include <iostream>
using namespace std ; 
int main(){
    int x , y ; 
    int m ; 
    int a , b ; 
    cout<<"Enter Num 1 : ";cin>>x;
    cout<<"Enter Num 2 : ";cin>>y;
    a = x ;  b = y ; 
    if (x < y ){
        
        x = x - y ; 
        y = x + y ; 
        x = y - x ; 
    }
    /* 
    Let x = 123   et  y = 9
    123 = 9 * 13 + 6 
     9 = 6 * 1 + 3 
     6 = 3 * 2 + 0 
     pgcd(123,9) = 3 
     */ 
     
     while(x % y != 0){
        /*
         cout<<x <<" = " 
                 << y 
                 << " * "
                 << x / y 
                 << " + "
                 << x % y
                 <<endl ;
                 */
                 
         m = x % y ; 
         x = y  ; 
         y =  m ;
 
 
     }
     cout<<"PGCD("
         << a << " , " << b 
         << ") = " << y ; 
}
