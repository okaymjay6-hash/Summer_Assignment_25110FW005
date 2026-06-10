//Find duplicates in array
#include <iostream>
using namespace std;

//only valid for positive integers
void nested_loop(int arr[], int n){

    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==-1){
            continue;
        }
      for(int j=i+1; j<n; j++){
        if(arr[j]==arr[i]){
            count++;
        }
        arr[j]=-1;
      }
      if(count>0){
        cout << arr[i] << " ";
      }
      arr[i]=-1;
      count = 0;
    }
}
//only valid if elements are of range 0 to (n-1)
void frequency(int arr[], int n){
    int freq[n];
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(int k=0; k<n; k++){
        if(freq[k]>1){
            cout << k << " ";
        }
    }
}

int main(){
    int n,z;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
        for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    nested_loop(arr,n);
    return 0;
}
//right now the time complexity is O(n^2) which can 
//be improved with sorting first O(nlogn) and hashmaps
//too with O(n) but that topics are later so now with just nested loop.