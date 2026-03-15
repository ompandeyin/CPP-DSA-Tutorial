// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//     int nums[]= {12, 23, 43, -32, 55};
//     int size= 5;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;
//     int index = -1;

//     for(int i=0; i<size; i++){
//         smallest = min(nums[i], smallest);
//         largest = max(nums[i], largest);
//         index = i;
//     }

//     cout<<"Smallest : "<<smallest<<endl;
//     cout<<"Largest : "<<largest<<endl;
//     cout<<"Index : "<<index<<endl;

//     return 0;

// }



// class practice{  
// public:
//     void rotate(vector<int>& nums, int k){
//         int n= nums.size();
//         k=k%n;

//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     }
// };




// class practice{
// public:
//     vector<int> twoSum(vector<int>& nums, int target){
//         int n= nums.size();

//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++)
//                 if(nums[i]+nums[j] ==target)
//                 return {i, j};
//         }
//         return {};
//     }
// };


//--------------------


// #include<iostream>
// #include<climits>
// using namespace std;

// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i]==target)
//         return i;
//     }
//     return 0;
// }

// int main(){
//     int arr[]= {1, 2, 3, 4, 5};
//     int sz= 5;
//     int target = 4;

//     cout<<linearSearch(arr, sz, target)<<endl;
//     return 0;
// }




//------------------------------------------------vivek sir class ----------------------------
// use pair-----------------------------1

// #include<iostream>
// using namespace std;

// int main(){
//     pair<int, string> pr={1, "LPU"};

//     pr.first=0;
//     pr.second="Om";
//     cout<<pr.first<<" "<<pr.second;
//     return 0;
// }





// use set-----------------------------2


// #include<iostream>
// #include<vector>
// #include<set>
// #include<map>
// using namespace std;

// int main(){

//     vector<int> vtr(5, 50);
//     set<int> st;
//     map<int, int> mp;

//     cout<<"\nSize of Vector"<<
// }






// class Solution{
// public:
//     vector<int> twoSum(vector<int>& nums, )
// }





// #include<iostream>
// using namespace std;

// void display(map<int, int> &mp)
// {
//     cout<<endl<<"\nSize of "
// }

//         diff= target 
//         if (np.count(diff) && i!=np[diff])
//         {
//             return(i, np[diff]);
//         }
//     }
//     return {};
// }





// #include<iostream>
// using namespace std;

// int main(){
//     int x=5;
//     float a;

//     cout<<"\nx="<<x;
//     cout<<"\n&x="<<&x;

//     int *y;
//     y=&x;
//     cout<<"\ny="<<y;
// }


//pointer array-------------

// #include<iostream>
// using namespace std;

// int main(){
//     int x=5;
//     int *y=&x;
//     cout<<y<<endl;
//     y=y+1;
//     cout<<y<<endl;


//     int array[5] ={100, 200, 300, 400, 500};

//     for(int i=0; i<5; i++)
//     cout<<(array +i)<<" ";
//     cout<<endl;


//     for(int i=0; i<5; i++)
//     cout<<*(i + array)<<" ";
//     cout<<endl;

//     for(int i=0; i<5; i++)
//     cout<<i[array]<<" ";
//     cout<<endl;

// }



//linkelist ----------------------------------------



// #include<iostream>
// #include<cstring>
// using namespace std;

// struct customer{
//     int acc_no;
//     char name[50];
//     float balance;
//     customer *link;
// };

// int main(){
//     customer c1;
//     c1.acc_no = 101;
//     strcpy(c1.name, "Rahul");
//     c1.balance = 5000.50;

//     cout<<"Customer 1(Normal Access):\n";
//     cout<<"Account No: " <<c1.acc_no<<endl;
//     cout<<"Name: "<<c1.name<<endl;
//     cout<<"Balance: "<<c1.balance<<endl;

//     customer c2;
//     c2.acc_no = 102;
//     strcpy(c2.name, "Anjali");
//     c2.balance = 7000.50;

//     c1.link = &c2;

//     cout<<"Customer 2(Access using Pointer through c1.link):\n";
//     cout<<"Account No: " <<c1.link->acc_no<<endl;
//     cout<<"Name: "<<c1.link->name<<endl;
//     cout<<"Balance: "<<c1.link->balance<<endl;


//     return 0;
// }



//singly and doubly linklist

// class node{
// public: 
//     int data;
//     node*next;
//     node

//     node(int data =0): data(data), next(nullptr){}
//     default values    
// };
// node*Head = nullptr;
// node*Tail = nullptr;
// int length = 0;


// class doubly_node{
// public:
//     int data;
//     node*
// }


//----------------------------------------------------vivek sir end-------------------------------------------



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

// void reverseArray(int arr[], int sz){
//     int start=0, end= sz-1;

//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main(){
//     int arr[]= {1, 2, 3, 4, 5};
//     int sz=5;

//     reverseArray(arr, sz);
//     for(int i=0; i<sz; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
//     return 0;
// }






// #include<iostream>
// #include<climits>
// using namespace std;

// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i]==target)
//         return i;

//     }
//     return 0;
// }

// int main(){
//     int arr[]={1, 2, 3, 4, 5};
//     int sz= 5;
//     int target= 3;

//     cout<<linearSearch(arr, sz, target)<<endl;
//     return 0;
// }



//----------------------------------------------------------------------------


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

//----------------

// #include<iostream>
// #include<climits>
// using namespace std;
// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int arr[] = {22, 33, 44, 55, 66};
//     int target = 44;
//     int sz= 5;

//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }



//----------------reverse array--------------

#include<iostream>
#include<climits>
using namespace std;
// int linearSearch(int arr[], int sz, int target){
//     for(int i=0; i<sz; i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return -1;
// }

// void reverseArray(int arr[], int sz){
//     int start =0, end = sz-1;

//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }

// }

// int main(){
//     int arr[] = {22, 33, 44, 55, 66};
//     int sz= 5;

//     reverseArray(arr, sz);
//     for(int i=0; i<sz; i++){
//         cout<< arr[i]<< " ";
//     }
//     cout<<endl;
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec;

//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<" Size = " << vec.size() <<endl;
//     cout<< "front: "<< vec.front()<<endl;
//     cout<< "position: "<< vec.at(2)<<endl;

//     for(int val : vec){        //for each loop
//         cout<< val <<endl;
//     }
//     return 0;
// }



#include<iostream>
#include<climits>
using namespace std;

void reverseArray(int arr[], int sz){
    int start=0, end =sz-1;

    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }
}

int main(){
    int arr[] = {22, 11, 55, 77, 99};
    int sz = 5;

    reverseArray(arr, sz);

    for(int i=0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}
