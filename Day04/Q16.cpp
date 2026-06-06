//Print Armstrong number in a range
#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int N,n1,n2,ldig;
    cout << "Enter range(upto): ";
    cin >> N;
    for(int n=1; n<=N; n++){
    n1=n;
    n2=n;
    int num=0;
    int digit=0;
    while(n1>0){
        n1=n1/10;
        digit++;
    }
    while(n2>0){
        ldig = n2%10;
        num= num + pow(ldig,digit);
        n2=n2/10;
    }
    if(num==n){
        cout << n << " ";
    }}
    return 0;
}