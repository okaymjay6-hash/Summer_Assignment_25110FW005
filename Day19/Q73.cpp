//Add matrices
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr1[3][3]={{1,2,3},
                    {3,5,6},
                    {6,4,9}};
    int arr2[3][3]={{1,3,5},
                    {8,1,7},
                    {2,5,8}};
    int sum[3][3]={0};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    } 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << sum[i][j] << " ";
        }
        cout << "\n";
    } 
    
    return 0;
}