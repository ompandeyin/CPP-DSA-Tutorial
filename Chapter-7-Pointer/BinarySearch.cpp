//__________________________ We can use binary search in only sorted array ----------------------------------

//------------- starting = 0th index , end = n-1  -------------------------
// ------------ Find mid = st + (st - end)/2  ---------------==  (st+end)/ 2   ------------------

//1. if tar > arr[mid]   then we have to search in 2nd half  ---------------
//2. if tar < arr[mid]   then we have to search in 1st half  ---------------
//3. if tar == arr[mid]   then answer is our mid element     ---------------

//1st half => (st to mid - 1)
//2st half => (mid + 1 to end)



// ---------------------------------- Binary Search --------------------------------------


// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int binarySearch(vector<int> arr, int tar){
//     int st=0, end = arr.size()-1;

//     while(st <= end){
//         int mid = st +(end - st) /2;

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
//     cout<< binarySearch(arr1, tar1) <<endl;

//     vector<int> arr2 = {12, 24, 36, 48, 42, 62};
//     sort(arr2.begin(), arr2.end());                  //very imp sorting technique
//     int tar2 = 48;
//     cout<< binarySearch(arr2, tar2);

//     return 0;
// }


//------------------------

// #include<iostream>
// #include<vector>
// using namespace std;

// int recBinarySearch(vector<int> arr, int tar, int st, int end){
//     if(st <= end){
//         int mid = st + (end-st) / 2;

//         if(tar > arr[mid]){
//             return recBinarySearch(arr, tar, mid +1, end);
//         }else if(tar < arr[mid]){
//             return recBinarySearch(arr , tar, st, mid - 1);
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }


// int main(){
//     vector<int> arr1 = {-1, 0 , 2, 3, 5, 6 , 12};
//     int tar1 = 12;

//     cout<<recBinarySearch(arr1, tar1, 0, arr1.size()-1) <<endl;

//     vector<int> arr2 = {-1, 0 , 2, 3, 6 , 12};
//     int tar2 = 6;
//     cout<<recBinarySearch(arr2, tar2, 0, arr2.size() - 1)<<endl;
//     return 0;


// }