// Find sum and average of array
#include <iostream>
using namespace std;

float sum_of_array(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
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
    float value = sum_of_array(arr,n);
    cout <<"The sum of elements is: " << value << "\n";
    cout << "The average is: " << value/n;
    return 0;
}