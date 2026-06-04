#include<iostream>
#include<vector>
using namespace std;
 int diagonalSum(vector<vector<int>>& mat) {
       int dig_Sum = 0;
       for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(i==j || i+j==mat.size()-1){
                dig_Sum = dig_Sum + mat[i][j];
            }
        }
       } 
       return dig_Sum;
    }
int main(){
     vector<vector<int>>matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
     };
     cout<<"Diagnol Sum is"<<diagonalSum(matrix);
    }