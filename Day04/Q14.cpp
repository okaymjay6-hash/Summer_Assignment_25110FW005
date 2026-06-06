//Nthe Fibonacci term
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter place: ";
    cin >> N;

    int m=0,sum=0;
    int n=1;
    for(int i=3; i<=N ; i++){
        sum=n+m;
        m=n;
        n=sum;   
    }
    cout << "The term at that place is: " << sum;
    return 0;
}