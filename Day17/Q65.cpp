//Merge arrays
#include <iostream>
using namespace std;

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
    for(int i=0; i<k; i++){
        cout << arr[i] << " ";
    }

    return 0;
}