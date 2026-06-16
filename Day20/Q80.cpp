//column-wise sum
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat={{1,2,3},
                             {2,2,5},
                             {4,9,2}};

    for(int i=0; i<3; i++){
        int colsum=0;
        for(int j=0; j<3; j++){
            colsum+=mat[j][i];
        }
        cout << "sum of " << i << " column is: " << colsum << "\n";
    }                         
    return 0;
}