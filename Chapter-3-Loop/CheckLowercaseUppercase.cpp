#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if(ch>'a' && ch<'z'){
        cout<<"Lowercase Letter"<<endl;
    }else{
        cout<<"Uppercase letter"<<endl;
    }
    return 0;
}