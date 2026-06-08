//Write function for Fibonacci.
#include <iostream>
using namespace std;

void nthfibo(int N){
     int m=0,sum=0;
    int n=1;
    for(int i=3; i<=N ; i++){
        sum=n+m;
        m=n;
        n=sum;   
    }
    cout << "The term at that place is: " << sum;
}

int main(){
    int N;
    cout << "Enter place: ";
    cin >> N;
    nthfibo(N);
    return 0;
}