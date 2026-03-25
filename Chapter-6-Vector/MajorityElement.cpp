//-----------*************-------------- Majority Elements ------------**************----Q. 169 LC
// In this time complexity is    O(n) square


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();

//         for(int val : nums) {
//             int freq = 0;

//             for(int el : nums){
//                 if(el == val){
//                     freq++;
//                 }
//             }
//             if(freq > n/2){
//                 return val;
//             }
//         }
//         return -1;
//     }

// };





//-------------now for optimize    O(nlogn)-----







//------------ most optimize :            O(n)------------------


// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int freq = 0, ans = 0;

//         for(int i=0; i<nums.size(); i++){
//             if(freq ==0) {
//                 ans = nums[i];
//             }
//             if(ans == nums[i]) {
//                 freq++;
//             }else{
//                 freq--;
//             }
//         }


//Note:   Listen with this way it seem diffcult ok so in the place of freq => count and in the place of ans use candiacte

//         int count =0;                        //use only no ans
//         for(int val : nums){
//             if(val == ans){
//                 count++;
//             }
//         }
        
//         if(count > n/2) => ans
//         else => -1                           // ----

//         return ans;
//     }

// };



//------------------easy way------------


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for(int num : nums){
            if(count == 0){
                candidate = num;
            }
            if(candidate == num){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
        
    }
};