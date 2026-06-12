// Find pair with given sum
#include <iostream>
using namespace std;

void pairsum(int arr[], int n, int sum){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((arr[j]+arr[i])==sum){
                cout << arr[i] << "," << arr[j] << "\n";
                arr[i]=sum;
            }
        }
    }
    return;
}

int main(){
    int n,sum;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter sum: ";
    cin >> sum;
    pairsum(arr,n,sum);
    return 0;
}