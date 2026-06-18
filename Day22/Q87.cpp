//Character frequency
//Count words in a sentence. 
#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="Hi, I am an Overthinker";
    char ch;
    cout << "enter character: ";
    cin >> ch;
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==ch){
            count++;
        }
        i++;
    }
    cout << count;
    return 0;
}