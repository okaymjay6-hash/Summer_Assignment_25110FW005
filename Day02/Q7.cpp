//product of digits
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int dig,product=1;
    while(n>0){
        dig=n%10;
        product=dig*product;
        n=n/10;
    }
    cout << "product of the digits is: " << product;
    return 0;
}