//--------------------------------------------------------------------
//print 3 int values -------------------------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec={1, 2, 3};
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     return 0;
// }


//--------------------------------------------------------------------
//print in 3 spaces assigned value in all 0---------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec(3, 0);
//     cout<<vec[0]<<endl;
//     cout<<vec[1]<<endl;
//     cout<<vec[2]<<endl;
//     return 0;
// }


//--------------------------------------------------------------
//print int values----------------------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec(5, 0);
//     for(int i: vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }



//----------------------------------------------------------------
//print char values-----------------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<char> vec={'a', 'b', 'c', 'd', 'e'};
//     for(char i: vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }



//----------------------------------------------Vector Function-------------------------------------------------
//------------------------------------------------1----Size---------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<char> vec = {'a', 'b', 'c', 'd'};

//     cout<<"size = "<<vec.size()<<endl;

//     for(char val : vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


//-----------------------------------------2----Push Back = Insert Elements--------------------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> vec;
    
//     cout<<"size = "<<vec.size()<<endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"size = "<<vec.size()<<endl;
    

//     for(int  val : vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }



//----------------------------------------3---Pop Back = Delete Last Element----------------------------------------



// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec;

//     cout<<"Size BEFORE inserting elements : "<<vec.size()<<endl;

//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(55);

//     cout<<"Size AFTER inserting elements : "<<vec.size()<<endl;

//     for(int val : vec){
//         cout<<val<<endl;
//     }

//     vec.pop_back();
//     vec.pop_back();

//     cout<<"Size AFTER deleting elements : "<<vec.size()<<endl;

//     for(int val: vec){
//         cout<<val<<endl;
//     }

//     return 0;
// }



//-----------------------------------------4,5------- front -- back-------------------------------------------------


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec;

//     cout<<"Size BEFORE inserting elements : "<<vec.size()<<endl;

//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(55);

//     cout<<"Size AFTER inserting elements : "<<vec.size()<<endl;

//     for(int val : vec){
//         cout<<val<<endl;
//     }

//     vec.pop_back();

//     cout<<"Size AFTER deleting elements : "<<vec.size()<<endl;

//     cout<<"Print front element : "<<vec.front()<<endl;
//     cout<<"Print back element : "<<vec.back()<<endl;

//     return 0;
// }



//-------------------------------------6 - at------------------------------------------------------




// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int>vec;

//     cout<<"Size BEFORE inserting elements : "<<vec.size()<<endl;

//     vec.push_back(35);
//     vec.push_back(45);
//     vec.push_back(55);

//     cout<<"Size AFTER inserting elements : "<<vec.size()<<endl;

//     cout<<vec.at(1);

//     return 0;
// }



//----------------------------------------------Vector Size and Capacity-------------------------------------------------


#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout<<vec.size()<<endl;//5
    cout<<vec.capacity()<<endl;//8

    return 0;
}



