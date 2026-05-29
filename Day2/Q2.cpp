//Reverse a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int last,rev=0;
    while(n>0){
        last=n%10;
        rev=rev*10 + last;
        n=n/10;
    }
    cout << "reverse number is: " << rev;
    return 0;
}
