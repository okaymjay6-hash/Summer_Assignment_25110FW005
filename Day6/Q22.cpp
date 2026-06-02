//Binary to decimal
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,i=0;
    cout << "Enter Binary number: ";
    cin >> n;
    int num=0;
    while (n>0){
        int bit=n%10;
        num += bit*(1<<i);
        i++;
        n=n/10;
    }
    cout << num;
      
    return 0;
}