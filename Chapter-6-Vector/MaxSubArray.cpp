//------------------------------------Maximum Subarray Sum---------------------------------------------------
//in this time complexity is = Big O(n)cube,


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1, 2, 3, 4, 5};

//     for(int st=0; st<n; st++){
//         for(int end=st; end<n; end++){
//             for(int i=st; i<=end; i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




//now we are going to write a code in that time complexity will be:  Big O(n)square


// #include<iostream>
// #include<climits>
// #include<vector>
// using namespace std;

// int main(){
//     int n=5;
//     int arr[5]={1, 2, 3, 4, 5};

//     int maxSum = INT_MIN;

//     for(int st=0; st<n; st++){
//         int currSum = 0;
//         for(int end=st; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(currSum, maxSum);
//         }
//     }
//     cout<<"Max subArray Sum: "<<maxSum<<endl;

//     return 0;
// }




//--------------------------------------- Now Kadane's Algorithm --------------------------------------------------
//with this we are going to print that-----------------------------Most Optimized---------------------------------

//Note:  It works on:                   "    +ve + --ve = -ve   "

//This algo says if got negative then make that 0



#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maxSubArray(vector<int>& nums){
    int currSum = 0, maxSum = INT_MIN;

    for(int val : nums){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout<<"Maximum Subarray Sum = "<<maxSubArray(nums)<<endl;
    return 0;
}