//Linear search
#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int z){
    for(int i=0; i<n; i++){
        if(arr[i]==z){
            return i;
        }
    }
    return -1;
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
    cout << "Enter searching element: ";
    cin >> z;
    int position=linearsearch(arr,n,z);
    if(position==-1){
        cout << "Element don't exist babe";
    }else{
    cout << "The position of the element is: " << position+1;
    }
    return 0;
}