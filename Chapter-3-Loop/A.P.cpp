#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n : ";
	cin>>n;
	//1 3 5 7 9...
	for(int i=4; i<=3*n+1; i=i+3){
		cout<<i<<" ";
	}
}
