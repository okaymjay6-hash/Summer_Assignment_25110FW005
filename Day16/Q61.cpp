//Find missing number in array
#include <iostream>
using namespace std;

int missing(int arr[], int n){
    int ogsum=(n*(n+1))/2;
    int currsum=0;
    for(int i=0; i<n-1; i++){
        currsum += arr[i];
    }
    return ogsum-currsum;
}

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
    }
    cout << "Missing element is: " << missing(arr,n);

    return 0;
}