#include<bits/stdc++.h>

using namespace std;
int main(){
    string str;
    string str2;
    getline(cin,str);

    for(int i=0;i<str.length();i++){
        if(str[i] == ' '){
          str2+="%20";
        }
        else{
            str2+=str[i];
        }
       
    }
    
    cout << str2;
    return 0;
}