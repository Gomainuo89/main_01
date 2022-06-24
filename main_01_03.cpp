/*
      Fibonanci 
                  */

#include <iostream>
using namespace std ; 
int main(){
	int x = 1 , y = 1 ; 
	int t , m = 0 , j ; 
	cout<<"Enter Num : ";cin>>t;
	cout<<x<<endl<<y<<endl;
	while (m < t ){
		j = x;x = y;y = j + x ;
		cout<<y<<endl;
		m++;
	}
	return 0;
}
	
		
