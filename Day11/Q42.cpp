// Write function to find maximum. 
#include <iostream>
using namespace std;

void maximum(int a, int b){
    int max;
    a>b?(max=a):(max=b);
    cout << max;
    return;
}

int main(){
    int a,b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    maximum(a,b);
    return 0;
}