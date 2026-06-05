//print Reverse Number
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    for(int i=1; i<=n; i++){
        int k=1;
        for(int j=n-i+1; j>0; j--){
            cout << k++;
        }
        cout << endl;
    }
    return 0;
}