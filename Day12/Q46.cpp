// Write function for Armstrong
#include <iostream>
#include<cmath>
using namespace std;

bool IsArmstrong(int n){
    int n1, n2, ldig, num=0;
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
        return true;
    }
    return false;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << IsArmstrong(n);
    return 0;
}