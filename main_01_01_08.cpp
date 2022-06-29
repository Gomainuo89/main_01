#include <iostream>
using namespace std ;
int main()
{
    int x ; 
    cout<<"Enter X : ";cin>>x;
    if(x % 2 ==0) x++;
    int c = (x-1)/2;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if((i>=j and c>=i and j<=c) or ((i-c)<=(c-j) and j<=c and i>=c) or (j>=c and i<=c and i>=x-j-1) or (j>=c and i>= c and  j>=i)) {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
            
    return 0;
}
