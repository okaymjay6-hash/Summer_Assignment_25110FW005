//Binary search
#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,6,2,9};
    int n=sizeof(arr)/sizeof(int);
    int z;
    cout << "Enter searching element: ";
    cin >> z;

      for(int i=0; i<n-1; i++){
        int minIndex=i;
      for(int j=i+1; j<n; j++){
          if(arr[j]<arr[minIndex]){
            minIndex=j;
          }
        }
        swap(arr[minIndex],arr[i]);
      }

      int l=0;
      int u=n-1;
      int mid= u+(l-u)/2;
      while(l<u && arr[mid]!=z ){
        if(z>arr[mid])
        {l=mid+1;}
        if(z<arr[mid])
        {u=mid-1;}
        mid=u+(l-u)/2;
      }
      if(arr[mid]==z){
        cout << "Element is found at " << mid+1;
      }else{
        cout << "Element not found";
      }

    return 0;
}