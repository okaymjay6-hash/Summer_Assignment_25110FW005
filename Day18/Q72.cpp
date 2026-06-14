//Sort array in descending order
//let's use insertion sort
#include <iostream>
using namespace std;

int main(){
    int arr[]={9,12,13};
    int n=sizeof(arr)/sizeof(int);

    //descending
    for(int i=1; i<n; i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && curr>arr[prev]){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }

    // ascending
    // for(int i=1; i<n; i++){
    //     if(arr[i]<arr[i-1]){
    //         for(int j=i; j>0; j--){
    //             if(arr[j]<arr[j-1]){
    //                 swap(arr[j],arr[j-1]);
    //             }
    //         }
    //     }
    // }



    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
       
    return 0;
}