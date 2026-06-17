//Count vowels and consonants
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1="Yesterday";
    int i=0;
    int vowels=0;
    int consonants=0;
    while(str1[i]!='\0'){
        if(str1[i]=='a'||str1[i]=='A'||str1[i]=='e'||str1[i]=='E'||str1[i]=='i'||
           str1[i]=='I'||str1[i]=='o'||str1[i]=='O'||str1[i]=='u'||str1[i]=='U'){
            vowels++;
           }else{
            consonants++;
           }
        i++;
    }
    cout << "number of vowels: " << vowels << endl;
    cout << "number of consonants: " << consonants;
    return 0;
}