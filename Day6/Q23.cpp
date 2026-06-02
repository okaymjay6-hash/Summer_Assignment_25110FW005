//Count set bits
//Counting set bits = counting how many 1s are in the binary representation of a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    int count=0;
    while(n>0){
        int temp=n%2;
        if(temp==1){
         count++;
        } 
        n=n/2;
    }
    cout << "The number of set bits are: " << count;
    return 0;
}