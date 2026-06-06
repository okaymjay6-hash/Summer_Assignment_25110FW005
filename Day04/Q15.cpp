#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n,n1,n2,ldig,num=0;
    cout << "Enter number: ";
    cin >> n;
    n1=n;
    n2=n;
    int digit=0;
    while(n1>0){
        n1=n1/10;
        digit++;
    }
    while(n2>0){
        ldig = n2%10;
        num= num+ pow(ldig,digit);
        n2=n2/10;
    }
    if(num==n){
        cout << "Armstrong number";
    }else{
        cout << "Not an Armstrong number";
    }
    return 0;
}