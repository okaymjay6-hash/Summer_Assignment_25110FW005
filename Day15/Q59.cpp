//Rotate array right
#include <iostream>
using namespace std;

void reverse(int arr[],int n){
    for(int i=0; i<n/2; i++){
        swap(arr[n-i-1],arr[i]);
        
    }
}

//without nested loop
void rotateright2(int arr[], int n, int k){
    reverse(arr,n-k);
    int i=n-k;
    for(int j=0;j<k/2; j++){
        swap(arr[i],arr[n-1-j]);
        i++;
    }
    //reverse(arr+k+1,n-k-1); we can use this as well;
    reverse(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

//nested loop
void rotateleft(int arr[], int n, int k){
    for(int i=k; i>0; i--){
        for(int j=n-1; j>0; j--){
            swap(arr[j],arr[j-1]);
        }
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    // int n,k;
    // cout << "Enter array size: ";
    // cin >> n;
    // int arr[n];
    int arr[7]={1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    // cout << "Enter elements: ";
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // cout << "Enter value of k: ";// k being the times of shifts
    // cin >> k;
    rotateright2(arr,n,k);
    return 0;
} 