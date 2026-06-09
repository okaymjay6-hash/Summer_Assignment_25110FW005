// Find largest and smallest element
#include <iostream>
using namespace std;

int largest(int arr[], int n){
    int biggest=INT16_MIN;
    for(int i=0; i<n; i++){
        biggest=max(arr[i],biggest);
    }
    return biggest;
}

int smallest(int arr[], int n){
    int small=INT16_MAX;
    for(int i=0; i<n; i++){
        small=min(arr[i],small);
    }
    return small;
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
    cout << "largest element is: " << largest(arr,n);
    cout << "smallest element is: " << smallest(arr,n);
    return 0;
}