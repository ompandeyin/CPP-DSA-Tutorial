//-----------------------------Print same numbers  in rows----------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n=5; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "; 
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<(i+1);
//         }
//         cout<<endl;
//     }
// }


// 11111
//  2222
//   333
//    44
//     5


//-----------------------------Print same numbers  in rows----------------------


// #include<iostream>
// using namespace std;

// int main(){
//     int n=5; 
//     char ch ='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "; 
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch;
//         }
//         cout<<endl;
//         ch++;
//     }
// }


// AAAAA
//  BBBB
//   CCC
//    DD
//     E



//-------------------------------------------- Char form Counting -------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n=5; 
//     char ch ='A';
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "; 
//         }
//         for(int j=0; j<n-i; j++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }


// ABCDE
//  FGHI
//   JKL
//    MN
//     O














// #include<iostream>
// using namespace std;

// int main(){
//     int n=5; 
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i; j++){
//             cout<<" "; 
//         }
//         for(int k=1; k<n-i; k++){
//             cout<<k<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1 2 3 4 
//  1 2 3
//   1 2
//    1



#include<iostream>
using namespace std;

int main(){
    int n=5; 
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" "; 
        }
        for(int k=1; k<n-i; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
}