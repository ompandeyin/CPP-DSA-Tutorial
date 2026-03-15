// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st=0, end= arr.size()-1;

//     while(st <= end){
//         int mid = st + (end - st)/2;

//         if(tar > arr[mid]){
//             st = mid +1;
//         }
//         else if(tar < arr[mid]){
//             end = mid -1;
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }


// int main(){
//     vector<int> arr1 = {10, 20, 30, 40, 50};
//     int tar1 = 30;
//     cout<<binarySearch(arr1, tar1)<<endl;

//     vector<int> arr2 = {12, 24, 48, 60, 36};
//     sort(arr2.begin(), arr2.end());
//     int tar2 = 48;
//     cout<<binarySearch(arr2, tar2)<<endl;

//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end - st)/2;

//         if(tar > arr[mid]){
//             return recBinarySearch(arr, tar, mid +1, end);
//         }
//         else if(tar < arr[mid]){
//             return recBinarySearch(arr, tar, st, mid-1);
//         }
//         else{
//             return mid;
//         }
//     }
//     return -1;
// }


// int main(){
//     vector<int> arr1 = {1, 3, 5, 7, 9, 11, 13};
//     int tar1 = 11;
//     cout<<recBinarySearch(arr1, tar1, 0, arr1.size()-1)<<endl;

//     vector<int> arr2 = {11, 33, 55, 77, 99, 111, 113};
//     int tar2 = 33;
//     cout<<recBinarySearch(arr2, tar2, 0, arr2.size()-1)<<endl;

//     return 0;
// }



// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
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


// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;


// int binarySearch(vector<int> arr, int tar){
//     int st =0,  end = arr.size()-1;

//     while(st<=end){
//         int mid = st + (end - st)/2;
//         if(tar > arr[mid]){
//             st = mid+1;
//         }else if(tar < arr[mid]){
//             end = mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;

// }

// int main(){
//     vector<int> arr = {12, 45, 56 ,67, 89};
//     int tar = 67;

//     cout << binarySearch(arr, tar);
//     return 0;
// }








#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarySearch(vector<int> nums, int tar){
    int st=0, end = nums.size()-1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(tar > nums[mid]){
            st = mid+1;
        }else if(tar < nums[mid]){
            end = mid-1;
        }else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {12,81, 24, 35, 99, 47, 89};
    sort(nums.begin(), nums.end());
    int tar = 24;

    cout<<binarySearch(nums, tar);
    return 0;
}