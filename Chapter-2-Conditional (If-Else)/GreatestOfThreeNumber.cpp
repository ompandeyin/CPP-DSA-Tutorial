#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter 1st Number: ";
	cin>>a;
	cout<<"Enter 2st Number: ";
	cin>>b;
	cout<<"Enter 3rd Number: ";
	cin>>c;

	if(a>b and a>c){
		cout<<a<<" is greater"<<endl;
	}
	else if(b>c and b>a){
		cout<<b<<" is greater"<<endl;
	}

	else if(c>b and c>a){
		cout<<c<<" is greater"<<endl;
	}
}  
