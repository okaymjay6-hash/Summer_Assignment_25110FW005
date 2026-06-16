//row wise sum
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> mat={{1,2,3},
                             {2,2,5},
                             {4,9,2}};

    for(int i=0; i<3; i++){
        int rowsum=0;
        for(int j=0; j<3; j++){
            rowsum+=mat[i][j];
        }
        cout << "sum of " << i << " row is: " << rowsum << "\n";
    }                         
    return 0;
}