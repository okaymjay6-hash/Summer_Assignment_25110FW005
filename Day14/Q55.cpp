//Second largest element
#include <iostream>
using namespace std;

int secondlargest(int arr[], int n){
    int largest=INT16_MIN;
    int seclar=INT16_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>largest && arr[i]>seclar){
            seclar=largest;
        }
        else if(arr[i]<largest && arr[i]>seclar){
            seclar=arr[i];
        }
        largest=max(largest,arr[i]);
    }
   return seclar;
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
    int sec=secondlargest(arr,n);
    if(sec==INT16_MIN){
        cout << "Element does not exist";
    }else{
    cout << "Second largest: " << sec;
    }
    return 0;
}