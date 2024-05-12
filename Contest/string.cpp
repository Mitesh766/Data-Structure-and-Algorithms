// You are given a string s
//  consisting of lowercase English letters.

// Rearrange the characters of s
//  to form a new string r
//  that is not equal to s
// , or report that it's impossible.

#include<iostream>

using namespace std;

int main(){
   int t;
   cin >> t;
   for(int i=0;i<t;i++){
    string str;
    cin >> str;
    bool isALLSAME=1;
    char curr=str[0];
    if(str.length()==1) isALLSAME=1;
    
    for(int i=0;i<str.size();i++){
    if(str[i]!=curr){
        isALLSAME=0;
        break;
    }
    }

    if(isALLSAME==1) cout << "NO";
    else {

        for(int i=0;i<str.length();i++){
            if(str[i]!=curr) swap(str[i],str[0]);
        }
  cout << str ;
    }
   }

    return 0;
}