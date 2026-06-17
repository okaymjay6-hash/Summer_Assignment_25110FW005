//Reverse a string
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str="wednesday is the day today";
    char arr[]="hello world";
    int i=0;
    //cout << str.length()
    for(int i=0; i<strlen(arr)/2; i++){
        swap(arr[i],arr[strlen(arr)-i-1]);
    }
    cout << arr;
    return 0;
}