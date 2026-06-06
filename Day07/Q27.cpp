// Recursive sum of digits of number
#include <iostream>
using namespace std;

int sumofdig(int n){
    if(n==0){
        return 0;
    }
    int dig=n%10;
    return dig + sumofdig(n/10);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << sumofdig(n);
    return 0;
}