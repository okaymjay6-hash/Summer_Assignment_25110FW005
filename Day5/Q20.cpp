//Largest Prime factor
#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int num){
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int super=-1;
    for(int i=2; i<=n; i++){
        if(n%i==0){
            if(isprime(i)){
                if(i>super){
                    super=i;
                } 
            }
        }
    }    
    cout << super;
    return 0;
}