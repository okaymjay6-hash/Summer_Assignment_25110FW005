//string length
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1="Hello";
    string arr4;
    char arr1[]={'h','e','l','l','\0'};//if size not given
    char arr2[6]={'h','e','l','l','o'};//if size given as n+1
    char arr3[]="hello world";//if initalized like this it will automatically get \0
    cout << "Enter string: ";
    cin >> arr4;
    int i=0;
    while(arr4[i]!='\0'){
       i++;
    }
    cout << i;
    return 0;
}