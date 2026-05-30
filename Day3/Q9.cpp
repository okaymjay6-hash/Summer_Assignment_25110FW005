//Identify Prime Numbers
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            cout<<"It is not a prime number";
            return 0;
        }
    }
    cout << "Prime";
    return 0;
}