//Rotate array left
#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0; i<n/2; i++){
        swap(arr[n-i-1],arr[i]);
        
    }
}
//without nested loop
void rotateleft2(int arr[], int n, int k){
    reverse(arr,k);
    // int i=k;
    // for(int j=0;j<(n-k)/2; j++){
    //     swap(arr[i],arr[n-1-j]);
    //     i++;
    // }
    reverse(arr+k,n-k);
    reverse(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

//with nested loop
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
    rotateleft2(arr,n,k);
    return 0;
} 