// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     char s[] = "hello";
//     int st = 0, end = s.size()-1;

//     while(st<end){
//         swap(s[st], s[end]);
//         st++;
//         end--;
//         cout<<s<<endl;
//     }
// }


//-------------------------

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "hello  sir.";
    reverse(str.begin(), str.end());
    cout<<str<<endl;

    return 0;   
}