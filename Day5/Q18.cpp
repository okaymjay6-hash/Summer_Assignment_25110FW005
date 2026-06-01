//Strong numbers
#include <iostream>
using namespace std;

int fact(int dig){
    if(dig==0){
        return 1;
    }
    return dig*fact(dig-1);
}

int main(){
    int n,dig,num;
    cout << "Enter number: ";
    cin >> n;
    num=n;
    int sum=0;
    while(n>0){
        dig=n%10;
        sum=sum+fact(dig);
        n=n/10;
    }
    (sum==num)?(cout<<"Strong number"):(cout<<"Not strong");
    return 0;
}