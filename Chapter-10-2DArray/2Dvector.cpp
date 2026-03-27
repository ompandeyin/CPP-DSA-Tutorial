#include<bits/stdc++.h>
using namespace std;


bool linearSearch(int mat[][3], int rows, int cols , int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}




int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9}};

    //rows == mat.size();
    //cols == mat[i].size();

    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}