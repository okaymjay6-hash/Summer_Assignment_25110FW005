//Union of arrays
//Merge arrays
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
                j--; }
        }
    }
    heyprint(arr,n);
}

int main(){
    int n1,n2;
    int arr1[]={1,3,6,7,8};
    int arr2[]={2,4,5,9,8,3,4};

    n1=sizeof(arr1)/sizeof(int);
    n2=sizeof(arr2)/sizeof(int);
    int k=n1+n2;
    int arr[k];

    for(int i=0; i<n1; i++){
        arr[i]=arr1[i];
    }
    int j=0;
    for(int i=n1; i<k; i++){
        arr[i]=arr2[j];
        j++;
    }
    duplicate_del(arr,k);
    return 0;
}