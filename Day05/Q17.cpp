//Perfect number
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int sum=1;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
           sum += i;
           if(i!=n/i){
           sum += n/i;}
        }
         
    }
    if(sum==n){
        cout << "Perfect number";
    }else{
        cout << "Not perfect";
    }
    return 0;
}