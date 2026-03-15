

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target){
//     vector<int>ans;
//     int n = nums.size();
    
//     int i=0, j=n-1;

//     while(i<j){
//         int pairSum = nums[i] + nums[j];
//         if(pairSum > target){
//             j--;
//         }else if(pairSum < target){
//             i++;
//         }else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector<int> nums = {11, 22, 33, 44 , 555};
//     int target = 77;

//     vector<int> ans = pairSum(nums, target);
//     cout<<ans[0]<<" , "<<ans[1]<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec;
//     cout<<"size: "<<vec.size()<<endl;
//     vec.push_back(33);
//     vec.push_back(44);
//     vec.push_back(55);
//     cout<<"size: "<<vec.size()<<endl;

//     for(int val: vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    cout<<"Size before push back: " << vec.size()<<endl;
    vec.push_back(11);
    vec.push_back(33);
    vec.push_back(55);
    cout<<"Size after push back: " << vec.size()<<endl;

    for(int val : vec){
        cout<< val <<endl;
    }
    return 0;
}