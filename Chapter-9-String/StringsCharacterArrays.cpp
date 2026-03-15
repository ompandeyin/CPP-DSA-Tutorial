// #include<iostream>
// using namespace std;
// int main(){
//     char str[] = {'a', 'b', 'c', '\0'};
//     cout<<str;
// }


//------------------


// #include<iostream>
// using namespace std;
// int main(){
//     char str[] = "apna college";
//     int len = 0;

//     for(int i = 0; i<str[i] != '\0'; i++){
//         len++;
//     }

//     cout<<"Length of string: "<<len <<endl;
//     return 0;
// }


//-----------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     char str[100];

//     cout<<"Enter char array: ";
//     cin.getline(str, 100, '$');  //remember if you are taking input then take $ also for getting correct output

//     cout<<"Output is : "<<str<<endl;
//     return 0;

// }



//--------------------

// #include<iostream>
// using namespace std;

// int main(){
//     char str[12];

//     cout<<"Enter char array: ";
//     cin.getline(str, 100);  

//     for(char ch : str){
//         cout<<ch<<" ";
//     }

//     cout<<endl;
//     return 0;

// }


//creating string -----------------


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str = "Om Pandey";        //string dynamic in nature because while runtime it will resize
//     cout<<str<<endl;                 // but in char we can not do change while runtime ok
//     cout<<str.length()<<endl;

//     str = "hello";
//     cout<<str<<endl;
//     cout<<str.length();

//     return 0;

// }


//----------------------------


// #include<iostream>
// #include<string>
// using namespace std;

// int main(){
//     string str1 = "Om";
//     string str2 = "Pandey";

//     string str3 = str1 +" "+ str2;
//     cout<<str3<<endl;

//     return 0;
// }




