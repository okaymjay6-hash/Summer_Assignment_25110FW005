// Count even and odd elements.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int oddnum=0;
    int evenum=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenum++;
            continue;
        }
        oddnum++;
    }
    cout << "No. of odd elements: " << oddnum;
    cout << "No. of even elements: " << evenum; 
    return 0;
}