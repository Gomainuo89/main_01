
#include <iostream>
using namespace std ; 
int main(){
	int x ; 
	cout<<" Enter Value : ";cin>>x;
	int const c = (x-1)/2;
	for(int i=0;i<c;i++){
		for(int j=(c-i);j>0;j--){
			cout<<" ";
		}
		for(int k=0;k<=2*i;k+=1){
			cout<<"*";
		}
		cout<<endl;
	}
	/*----------------------*/
	for(int r=0;r<=c;r++){
		for(int m=0;m<r;m++){
			cout<<" ";
		}
		for(int d=2*(c-r)+1;d>0;d--){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
