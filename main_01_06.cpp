
// Abd-Elouahab Moustapha 

#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter The Num :";cin>>x;
	int const c = (x - 1)/2; 
	for(int i=0;i<c;i++){
		for(int j=0;j<x;j++){
			if (i == (c-j) or i==(j-c)){
			    cout<<"*";
			}
			else if(i < (c-j) or i<(j-c)){
				cout<<"-";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	/* -----------------------------*/
	
		for(int i=0;i<=c;i++){
		    for(int j=0;j<x;j++){
			if (i == j or j==x-i-1){
			    cout<<"*";
			}
			else if (i >j or j>(x-i-1) ){
				cout<<"-";
			}
			else {
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
			
	
	return 0;
}
