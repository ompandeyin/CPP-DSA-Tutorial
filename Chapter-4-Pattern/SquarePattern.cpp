// Print square numbers
// 1 2 3 4 
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4



// #include<iostream>
// using namespace std;

// int main(){
//     int n=4;
//     for(int i=0; i<n; i++){
//         for(int j=1; j<=n; j=j+1){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//---------------- Print character in square ----------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n=3;

//     for(int i=0; i<=n; i++){
//         char ch= 'A';

//         for(int j=1; j<=n; j++){
//             cout<<ch<<" ";
//             ch = ch+1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// A B C 
// A B C
// A B C
// A B C


//------------------ Continue Number Printing ---------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int num=1;
//     int n=3;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j=j+1){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//------------------ Continue Character Printing ---------------------


#include<iostream>
using namespace std;

int main(){
    int n=2;
    char ch='A';
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}


// A B C 
// D E F
// G H I