#include<iostream>
using namespace std;

int main(){
	int cp;
	cout<<"Enter cp: ";
	cin>>cp;
	
	int sp;
	cout<<"Enter sp: ";
	cin>>sp;
	
	if(sp>cp){
		cout<<"Seller has made profit"<<endl;
		cout<<sp-cp<<endl;
	}
	else if(sp<cp){
		cout<<"Seller has made loss"<<endl;
		cout<<-(cp-sp)<<endl;
	}
	else{
		cout<<"no profit no loss";
	}

}
