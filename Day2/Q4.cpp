//palindrome number 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int last,rev=0;
    int number=n;
    while(n>0){
        last=n%10;
        rev=rev*10 + last;
        n=n/10;
    }
    if(rev==number){
        cout << "Palindrome number";
    } else{
        cout << "Not a palindrome";
    }
    return 0;
}