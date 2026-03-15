#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2nd Number: ";
	cin>>b;
	cout<<"Enter 3rd Number: ";
	cin>>c;

	if(a>b){    //b can never be the greatest
		if(a>c){
			cout<<a<<" is greatest"<<endl;
		}
		else{       //c>a , a>b    ->  c>a+b
			cout<<c<<" is greatest"<<endl;
		}
	}
	else{  //b>a 
		if(b>c){
			cout<<b<<" is greater"<<endl;
		}
		else{ // c>b , c > b > a
			cout<<c<<" is greater"<<endl;
		}	
	}
}   
