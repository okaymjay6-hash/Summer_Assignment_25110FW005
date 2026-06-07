//  Write function to check prime
#include <iostream>
using namespace std;

bool Isprime(int a){
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a;
    cout << "Enter number to check: ";
    cin >> a;
    cout << Isprime(a);   
    return 0;
}