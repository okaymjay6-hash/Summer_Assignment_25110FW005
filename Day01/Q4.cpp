//Count digits
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int digit=0;
    if(n==0){
        cout << 1;
        return 0; //added zero case
    }
    while(n>0){
        n=n/10;
        digit++;
    }
    cout << digit; 
    return 0;
}