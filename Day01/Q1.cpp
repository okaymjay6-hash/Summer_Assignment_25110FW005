//SUM OF FIRST OF NATURAL NUMBERS
#include <iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout << "Enter the n: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        sum=sum+i;
    }
    cout << sum;
    return 0;
}