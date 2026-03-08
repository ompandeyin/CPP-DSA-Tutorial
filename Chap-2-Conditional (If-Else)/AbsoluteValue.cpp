#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
//	if(n>=0){
//		cout<<n<<endl;
//	}
//	else{  //n<0
//		cout<<-n<<endl;
//	} 

	//if you want you change n into its absolute value 
	if(n<0) n=-n;
	cout<<n;
}
