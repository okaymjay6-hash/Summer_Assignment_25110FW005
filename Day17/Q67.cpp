//Intersection of arrays
#include <iostream>
#include <vector>
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
    int n1,n2;
    int arr1[]={1,3,6,3,8};
    int arr2[]={2,3,5,3,8,3,4};
    int arr[100];
    int k=0;
    n1=sizeof(arr1)/sizeof(int);
    n2=sizeof(arr2)/sizeof(int);
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            if(arr1[i]==arr2[j]){
                arr[k]=arr1[i];
                k++;
                
            }
        }
    }

   duplicate_del(arr,k);

    return 0;
}
