//LCM of two no.
#include <iostream>
using namespace std;

int main(){
    long long n,m,lcm;
    cout << "Enter the numbers: " ;
    cin >> n >> m;
    int large= max(n,m);
    int small= min(n,m);
    int multiple = large;
    
    while(multiple%small!=0){
        multiple+=large;
    }

    cout << "LCM= " << multiple;
    return 0;
}