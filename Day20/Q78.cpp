//symmetric matrix
#include <iostream>
#include <vector>
using namespace std;

bool isSymmetric(vector<vector<int>> mat){
    int rows=mat.size();
    int cols=mat[0].size();
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(mat[i][j]!=mat[j][i]){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int rows, cols;
    cout << "enter rows and column : ";
    cin >> rows >> cols;
    vector<vector<int>> mat(rows,vector<int>(cols,0));
    cout << "Enter elements: ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> mat[i][j];
        }
    }
    
    cout << isSymmetric(mat);

    return 0;
}