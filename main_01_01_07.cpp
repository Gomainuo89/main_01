#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter X : ";cin>>x;
	if (x % 2 == 0 ){
		x++; 
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			if(i==x-j-1 or i==j){
			    if (i==j and i== x-j-1){
			    	cout<<"  ";
			    }
			    
			    else cout<<"  ";
			}
			else cout<<"* ";
		}
		cout<<endl;
	
	}
	return 0 ;
}
