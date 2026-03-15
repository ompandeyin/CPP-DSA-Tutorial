//--------- Character Array ------------


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str[] = {'a', 'b', 'c', '\0'};

//     cout<< strlen(str) << endl;
//     return 0;
// }

//------------ D limiter -----------

// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str[100];

//     cout << "Enter char array : ";
//     cin.getline(str, 100);


//     for(char ch : str){
//         cout << ch <<" ";
//     }
//     cout<<endl;

//     cout<< "Output: " << str << endl;
//     return 0;
// }


//------------------ Count Length----------


// #include<iostream>
// #include<cstring>
// using namespace std;

// int main(){
//     char str[] = "om pandey";
//     int len = 0;

//     for(int i=0; i<str[i]; i++){
//         len++;
//     }
//     cout<<endl;

//     cout<< "Length of string: " << len << endl;
//     return 0;
// }



// -------------   String -------------


// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// int main(){
//     string str = "om pandey";
//     cout << str << endl;

//     str = "hello";

//     cout << str << endl;
//     return 0;
// }


// -------------- String Operations ------------------


// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// int main(){
//     string str1 = "Om ";
//     string str2 = "Pandey";

//     string str3 = str1 + str2;   //concatination
//     cout << str3 << endl;

//     cout<< (str1 == str2) << endl; 
//     cout<< (str1 < str2) << endl; 

//     cout << str3.length() << endl;
//     return 0;
// }


// ---------------------- Input/Output in Strings ----------
//we can not take in input long string normaly we have to use "getline" in this also.


// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// int main(){
//     string str;

//     getline(cin, str);

//     cout << "Output : " << str << endl;
//     return 0;
// }


//-------------------- Loops ------------
//print character of string


// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// int main(){
//     string str = "Apna College";

//     for(int i = 0; i<str.length(); i++){
//         cout<< str[i]<<" ";
//     }
//     cout<< endl;
//     return 0;
// }


// --------- with the for each loop ---------

// #include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;

// int main(){
//     string str = "Apna College";

//     for(char ch : str){
//         cout<< ch <<" ";
//     }
//     cout<< endl;
//     return 0;
// }



//Q1. ------ Reverse a String ------------------
//If char here then you can swap 

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main(){
//     string str = "Apna College";

//     reverse(str.begin(), str.end());
//     cout<< str << endl;
//     return 0;
// }


//--------------- String find palindrome ---------------- 
//reverse also same word "racecar"


#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string str = "racekbkcar";

    int n = str.size()-1;
    int st = 0, end = n;

    bool isPalindrome = true;

    while(st < end){
        if(str[st] != str[end]){
            isPalindrome = false;
            break;
        }
        st++;
        end--;
    }
    if (isPalindrome){
        cout<<" Yes palindrome" << endl;
    }else{
        cout<< " Not palindrome" << endl;
    }

    return 0;
}