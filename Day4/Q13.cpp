//Fibonacci series
#include <iostream>
using namespace std;

int main(){
    int N;
    cout << "Enter range(upto): ";
    cin >> N;

    int m=0,sum=0;
    int n=1;
    cout << m <<" "<< n << " ";
    while(sum<N){
        sum=n+m;
        if(sum<=N)
        cout << sum << " ";
        m=n;
        n=sum;   
    }
    return 0;
}