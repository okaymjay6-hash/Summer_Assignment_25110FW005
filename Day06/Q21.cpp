//Decimal to Binary
#include <iostream>
using namespace std;
void decimal(int n){
    if(n==0){
        return;
    }
    int temp= n%2;  
    decimal(n/2);
    cout<<temp; 
}

int main(){
    int n;
    cout << "Enter decimal number: ";
    cin >> n;
    decimal(n);
    return 0;
}