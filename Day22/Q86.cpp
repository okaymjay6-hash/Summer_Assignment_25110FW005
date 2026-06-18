//Count words in a sentence. 
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="Hi, I am a procastinator";
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if((str[i]>=65 && str[i]<=90)||(str[i]>=97 && str[i]<=122)){
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}