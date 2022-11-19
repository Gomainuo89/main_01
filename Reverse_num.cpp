

#include <iostream>
using namespace std ; 
int main(){
    int r , x  ; 
    int a = 0 ; 
    cout<<"Enter The value number : ";
    cin>>x; 
    while(x != 0){
        r = (x % 10);
        a = a*10 + r ; 
        x = (x - r)/10 ;         
    }
    cout<<"The reverse value number : " << a ;    
    return 0 ; 
}
