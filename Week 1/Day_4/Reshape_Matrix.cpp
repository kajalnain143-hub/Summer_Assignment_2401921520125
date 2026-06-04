#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>ans(r, vector<int>(c));
        int row = mat.size();
        int col = mat[0].size();
    if(row*col != r*c){
        return mat;
    }
    for(int k=0;k<row*col;k++){
       int oldrow = k/col;
       int oldcol = k%col;
       int newrow = k/c;
       int newcol = k%c;

       ans[r][c]=mat[oldrow][oldcol];
    }
    return ans;
}
int main(){
    vector<vector<int>> matrix = {
        {1,2},
        {3,4},
    };
    int row =1;
    int col = 4;
    vector<vector<int>> result = matrixReshape(matrix,row,col);
   for(auto row : result){
    for(auto val : row){
        cout << val << " ";
    }
    cout << endl;
}

}