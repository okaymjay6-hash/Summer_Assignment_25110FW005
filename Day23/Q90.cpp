// first repeating character
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void repeating(string str){
    int freq[26]={0};
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        freq[ch -'a']++;  
    }
    for(int i=0; i<26;i++){
        if(freq[i]>1){
            cout << char('a'-i);
            break;
        }
    }
}

int main(){
    string str="abcxcxb";
    repeating(str);
    return 0;
}