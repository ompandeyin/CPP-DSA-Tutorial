// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;


// void printArray(int arr[], int n){
//     for(int i=0; i<n; i++){
//         sort(arr.begin(), arr.end());
        
//     }  
// }

// int main(){
//     int arr = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};

//     printArray(arr);
//     return 0;
// }

//optimal---------------------------------------------sorting approch

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {1,2,4,5,0, 2,0, 4, 1, 0, 5, 4, 2, 4,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = arr.size();

    int count0 = 0;
    int count1 = 1;
    int count2 = 2;


    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }else if(arr[2] == 2){
            count2++;
        }
    }


    for(int i=0; i<count0; i++){
        cout<<0<<" ";
    }
    for(int i=0; i<count1; i++){
        cout<<1<<" ";
    }
    for(int i=0; i<count2; i++){
        cout<<2<<" ";
    }
    return 0;

}