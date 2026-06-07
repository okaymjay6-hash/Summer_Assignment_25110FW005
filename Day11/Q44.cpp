// Write function to find factorial.
#include <iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=n; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int a;
    cout << "Enter number to check: ";
    cin >> a;
    cout << factorial(a); 
    return 0;
}