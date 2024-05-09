#include<iostream>
using namespace std;

int main(){
  string str;
  cin >> str;
char currentCharacter=str[0];
int currentCount=0;

for(int i=0;i<str.length();i++){
    if(str[i]==currentCharacter){
        currentCount++;
    }
    else{
        cout << str[i-1]
    }
}


    return 0;
}