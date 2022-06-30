
#include <iostream>
using namespace std ;
int main(){
    int x , c ; 
    cout<<"Enter X : ";cin>>x;
    if (x%2==0) x++;
    c = (x - 1)/2 ;
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if (i == c or j == c) cout<<"  ";
            else if(i==0 or i==x-1 or j==0 or j==x-1 or i==c-1 or i==c+1 or j==c-1 or j==c+1){
                cout<<"* ";
            }
            else  cout<<"  " ;
        }
        cout<<endl;
    }
    return 0;
}
