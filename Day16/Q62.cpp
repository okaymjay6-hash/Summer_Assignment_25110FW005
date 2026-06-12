//Find maximum frequency element
#include <iostream>
using namespace std;

int maxfreq(int arr[], int n){
    int max=0,temp;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(max<count){
            max=count;
            temp=arr[i];
        }
    }
    return temp;
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
    cout << maxfreq(arr,n);
    return 0;
}