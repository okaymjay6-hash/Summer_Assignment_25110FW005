//Recursive reverse number
#include <iostream>
using namespace std;

int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int dig=n%10;
    rev=rev*10+dig;
    reverse(n/10,rev);
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << reverse(n,0);
    return 0;
}