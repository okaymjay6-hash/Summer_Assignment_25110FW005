////first non-repeating character
//for each index
#include <iostream>
#include <queue>
#include <string>
using namespace std;

void non_repeating(string str){
    int freq[26]={0};
    queue<char> Q;
    for(int i=0; i<str.size(); i++){
        char ch=str[i];
        freq[ch -'a']++;
        Q.push(ch);
        while(!Q.empty() && freq[Q.front()-'a']>1){
            Q.pop();
        }
        if(Q.empty()){
            cout << -1 << " ";
        }else{
            cout << Q.front() << " ";
        }
    }
}

int main(){
    string str="aabccxb"; //the output will be calculated for 1.a 2.aa 3.aab like that
    non_repeating(str);
    return 0;
}