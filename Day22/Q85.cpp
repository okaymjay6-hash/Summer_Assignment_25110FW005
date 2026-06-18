// Check palindrome string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="nalemelan";
    int n=str.length();
    for(int i=0; i<n; i++){
       if(str[i]!=str[n-1-i]){
        cout << "Not palindrome";
        return 0;
       }
    }
    cout << "palindrome";
    return 0;
}