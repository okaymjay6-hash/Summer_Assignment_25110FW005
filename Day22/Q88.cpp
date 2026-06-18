// Remove spaces from string.
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="Hey, I don't learn fast";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
           str[i]=0;
        }
        i++;
    }
    cout << str;
    return 0;
}