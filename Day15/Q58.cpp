//Rotate array left
#include <iostream>
using namespace std;

void rotateleft(int arr[], int n, int k){
    for(int i=k; i>0; i--){
        for(int j=0; j<n-1; j++){
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n,k;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Enter value of k: ";// k being the times of shifts
    cin >> k;
    rotateleft(arr,n,k);
    return 0;
} 