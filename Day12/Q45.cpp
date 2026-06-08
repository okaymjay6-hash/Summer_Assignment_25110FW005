// Write function for palindrome
#include <iostream>
using namespace std;

bool IsPalindrome(int n){
    int last,rev=0;
    int number=n;
    while(n>0){
        last=n%10;
        rev=rev*10 + last;
        n=n/10;
    }
    if(rev==number){
        return true;
    } 
    return false;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << IsPalindrome(n);
    return 0;
}