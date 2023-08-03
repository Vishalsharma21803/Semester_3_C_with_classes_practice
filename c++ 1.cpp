#include <iostream>
using namespace std;
int main(){
	int x;
	int count=0;
	cout<<"enter a number: ";
	cin>>x;
	for(int i=2;i<x;i++){
		if (x%i==0){
			count=count+1;
		}
		
	}
	if (x==0 || x==1){
	    cout<<x<<" is a rational number"<<endl;
	}
	else if (count==0){
		cout<<x<<" is prime number"<<endl;
		
	}
	else{
		cout<<x<<" is not a prime number"<<endl;
	}
	
	
	
	
	return 0;
}