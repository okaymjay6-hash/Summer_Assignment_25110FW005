// Print number pyramid
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
           cout<< " ";
        }
        int k=1;
        for(int j=1; j<=(2*i-1); j++){
            if(j>i){
                cout << k-2;
                k--;
            }else{
             cout<< k++;
            }
        }
     cout << endl;
    }

    return 0;
}