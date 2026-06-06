//Print Prime Numbers upto a range
#include <iostream>
using namespace std;

int main(){
    int range;
    cout << "Enter the range(upto): ";
    cin >> range;
    for(int j=2; j<=range; j++){
        int dig=0;
        for(int i=2; i*i<=j; i++){
         if(j%i==0){
            dig++;
            }
         }
         if(dig==0){
            cout << j << " ";
         }
    }
    return 0;
}