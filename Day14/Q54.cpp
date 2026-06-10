//Frequency of an element
#include <iostream>
using namespace std;

int frequency(int arr[], int n, int z){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]==z){
            count++;
        }
    }
    return count;
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
    cout << "whose frequency to find: ";
    cin >> z;
    cout << "The frequency of the element " << z << " is: " << frequency(arr,n,z);
    return 0;
}