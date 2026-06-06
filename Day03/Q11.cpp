//GCD of two no.
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout << "Enter the numbers: " ;
    cin >> n >> m;
    int Gcd=1;
    for(int i=2; i<=min(n,m);i++){
        if(n%i==0 && m%i==0){
            Gcd=i;
        }
    }
    cout << Gcd;
    return 0;
}