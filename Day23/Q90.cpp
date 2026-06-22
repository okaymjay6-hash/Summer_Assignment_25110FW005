//first repeating character
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void repeating(string str){
    int freq[26]={0};
    queue<char> Q;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        freq[ch-'a']++;
        Q.push(ch);
    }
    while(!Q.empty() && freq[Q.front()-'a']==1){
        Q.pop();
    }
    if(Q.empty()){
        cout << -1;
    }else{
        cout << Q.front();
    }
}

int main(){
    string str="dcdc";
    repeating(str);
    return 0;
}