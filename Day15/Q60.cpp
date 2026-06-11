// Move zeroes to end. 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int n1=n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0){
        for(int j=i; j<n-1; j++)
        swap(arr[j],arr[j+1]);
      }
      n--;
      i--;
    }
    for(int i=0; i<n1; i++){
        cout << arr[i] << " ";
    }
    return 0;
} 