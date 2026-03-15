// _______________ We learn ____________________________
//Memory address
//pointer to pointer
//dereferencing
//pass by reference => ptr       
//pass by reference => ref(alias)
//array pointer
//pointer arithmeatic


// -------- use of & -------------

//1st. bitwise or
//2nd. address of
//3rd. alias

//------- use of * --------------------

//1st. multiply 
//2nd. dereference   


//----------------------------------------------------------------------------------
//Note: Array Pointer will be constant pointer we can change value of these pointers:


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     cout<<arr<<endl;  //pointer
//     cout<< *arr<<endl;  //value of first element
//     return 0;
// }



// ------------------------------ Airthmeatic opreations in pointer array----------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int *ptr = &a;


//     cout<< ptr <<endl;
//     ptr--;
//     cout<< ptr <<endl;  

//     return 0;
// }


// ------------------------ Adding in pointer -----------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int *ptr = &a;

//     cout<< ptr <<endl;
//     ptr = ptr +2;    //2nt => 8B
//     cout<< ptr <<endl;    //+8

//     return 0;
// }



//--------------------------------------- Accesss the next value through adding -------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};


//     cout<< *arr <<endl;
//     cout<< *(arr + 1) <<endl;    
//     cout<< *(arr + 2) <<endl;    
//     cout<< *(arr + 3) <<endl;    
//     cout<< *(arr + 4) <<endl;    

//     return 0;
// }


//-------------------------------------- Subtract between two pointers ------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};

//     int* ptr2;  //100
//     int* ptr1 = ptr2 + 2;      //108

//     cout<< ptr1 - ptr2 << endl;   //2

//     return 0;
// }



// ------------------------------------Comparision between two pointers -------------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int arr[] = {10, 20, 30, 40};

//     int* ptr = arr;

//     cout<< *(ptr +1) << endl;   
//     cout<< *(ptr +3) << endl;  
//     ptr++; 
//     cout<< *ptr << endl;  

//     return 0;
// }