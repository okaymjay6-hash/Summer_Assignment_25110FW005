//Convert lowercase to uppercase
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    cout << "Enter string: ";
    cin >> str1;
    int i=0;
    while(str1[i]!='\0'){
       if(str1[i]>=65 && str1[i]<=90){
            str1[i]+=32;
        }else{
             str1[i]-=32;
        }
        i++;
    }
    cout << str1;
    return 0;
}