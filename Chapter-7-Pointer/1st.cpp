// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     int a=10;
//     int* ptr = &a;
//     int** parPtr = &ptr;

//     cout<<&ptr<<endl;
//     cout<<parPtr<<endl;

//     return 0;
// }





//----------------------------------it is printing the value of that address--------------------------------

// #include<iostream>
// #include<vector>

// using namespace std;

// int main(){
//     int a=10;
//     int* ptr = &a;
//     int** parPtr = &ptr;

//     cout<< *(&a) <<endl;
//     cout<< *ptr <<endl;    

//     cout<< *(parPtr) <<endl;
//     cout<< **(parPtr) <<endl;
//     cout<< ptr <<endl ;

//     return 0;
// }


//--------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int a = 5;
//     int* p = &a;
//     int** q = &p;

//     cout<< *p << endl;    //printing the value that are in it
//     cout<< p << endl;     // printing the address that are store in it

//     cout<< **q << endl;   //printing the previous 2nd value
//     cout<< *q << endl;   //printing the address that are store in it
// }




//------------------------------ Pass by reference using pointers -------------------------------------




// #include<iostream>
// #include<vector>
// using namespace std;

// void changeA(int* ptr){
//     *ptr = 20;
// }


// int main(){
//     int a=10;
//     changeA(&a);

//     cout<<"Inside the function: "<< a <<endl;
//     return 0;

// }





//------------------------------ Pass by reference using alias  -------------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// void changeA(int &b){
//     b = 20;
// }

// int main(){
//     int a=10;
//     changeA(a);

//     cout<<"Inside the fnx: "<< a <<endl;
//     return 0;

// }




//Note: In cpp pass by references will be done by 
//1. pass by pointers or 2. pass by references(alias)





