// Remove duplicates from array
#include <iostream>
using namespace std;

void heyprint(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void element_delete(int arr[], int n, int z){
    for(int i=z; i<n-1; i++){
        arr[i]=arr[i+1];
    }
}

void duplicate_del(int arr[],int n){
    for(int i=0;i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                element_delete(arr,n,j);
                n=n-1;
                j--; //added because after shifting it must check current value again
            }
        }
    }
    heyprint(arr,n);
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    duplicate_del(arr,n);
    return 0;
}