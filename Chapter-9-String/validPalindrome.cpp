#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello Om";
    string count;
    reverse(str.begin(), str.end());
    count = str;
    if(count == str){
        cout<<"true"<<endl;
    }else{
        cout<<"false";
    }

    return 0;   
}