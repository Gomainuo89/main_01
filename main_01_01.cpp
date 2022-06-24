
#include <iostream>
using namespace std ; 
int main(){
	int a,b,c,t;
	cout<<"Enter :";cin>>a ;
	cout<<"Enter :";cin>>b ;
	cout<<"Enter :";cin>>c ;
	cout<<"-------------------------"<<endl;
	if (a > b ){
		t = a ; a = b ; b = t; 
	}
	if (b > c ){
		t = c ; c = b ; b = t ;
	}
	if (a > b ){
		t = a ; a = b ; b = t;
	}
	
	cout<<"Max : " << c <<endl <<"Min : "<<a;
	return 0 ;
}
