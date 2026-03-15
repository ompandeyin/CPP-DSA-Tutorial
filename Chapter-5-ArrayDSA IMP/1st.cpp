//********************************Find Smallest and largest************************** */

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int nums[] = {5, 15, 22, 1, -15, -24};
//     int size = 6;

//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//         }
//     }

//     cout<<"Smallest = "<<smallest<<endl;
//     return 0;
// }




//------------Best way to find------------------ optimize---------------------


// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int nums[5] = {22, 33, 44, 55, 66};
//     int size = 5;

//     int largest = INT_MIN;
//     int smallest = INT_MAX;

//     for(int i=0; i<size; i++){
//         largest = max(nums[i], largest);
//         smallest = min(nums[i], smallest);
//     }
    
//     cout << " Largest num is: " << largest << endl;
//     cout << " Smallest num is: " << smallest << endl;
//     return 0;
// }





//*********************************************Printing Index*********************** */
//-----------------------------Smallest-----

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int nums[]= {5, 15, -15, 22, 24};
//     int size = 5;

//     int smallest = INT_MAX;
//     int index = 0;

//     for(int i=0; i< size; i++){
//         if(nums[i] < smallest){
//             smallest = nums[i];
//             index = i;
//         }
//     }
    
//     cout<<"Smallest = "<<smallest<<endl;
//     cout<<"Index = "<<index<<endl;

//     return 0;
// }


//--------------------------Largest--------


// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int nums[]={12, 42, 23, -11, 65};
//     int size = 5;

//     int largest = INT_MIN;
//     int index = 0;

//     for(int i=0; i<size; i++){
//         if(nums[i]> largest){
//             largest = nums[i];
//             index = i;
//         }
//     }
//     cout<<"Largest = "<<largest<<endl;
//     cout<<"Index = "<<index<<endl;
// }


//***********************************************Linear Search********************************************** */
//Print the index of the given number in the array------------------------------------



// #include<iostream>
// #include<climits>
// using namespace std;

// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i]==target)
//         return i;
//     }
//     return -1;

// }

// int main(){
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 7;


//     cout<<linearSearch(arr, sz, target)<<endl;
//     return 0;
// }





//Reverse an Array --- Two pointer approch--------------------------------



// #include<iostream>
// #include<climits>
// using namespace std;

// void reverseArray(int arr[], int sz){
//     int start =0, end = sz-1;

//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3, 4, 5};
//     int sz = 5;

//     reverseArray(arr, sz);

//     for(int i=0; i<sz; i++){
//         cout<< arr[i] <<" ";
//     }
//     cout<< endl;
//     return 0;
// }