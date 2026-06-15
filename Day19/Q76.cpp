//Diagonal sum
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},
                    {3,5,6},
                    {6,4,9}};
    int sum=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
          if(j==i){
            sum+=arr[i][j];
          }
        }
    } 
    cout << sum;
    
    return 0;
}