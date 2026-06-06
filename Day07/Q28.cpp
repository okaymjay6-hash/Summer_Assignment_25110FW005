//Recursive reverse number
#include <iostream>
using namespace std;

int reverse(int n, int rev){
    if(n==0){
        return rev;
    }
    int dig=n%10;
    rev=rev*10+dig;
    return reverse(n/10,rev); //adding return here doesn't change the value, it just makes 
                             //sure the value travels back up to main instead of 
                            //getting lost at each level without return
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << reverse(n,0);
    return 0;
}