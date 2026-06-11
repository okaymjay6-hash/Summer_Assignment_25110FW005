//Reverse array
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n/2; i++){
        swap(arr[n-1-i],arr[i]);
        
    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}