#include<bits/stdc++.h>

using namespace std;

int main(){
   string str;
   getline(cin ,str);
   int charCount[26]={0};
   for(int i=0;i<str.length();i++){
    if(str[i]!=' '){
    charCount[str[i]-'a']++;
    }
   }
   int odd_count=0;
   for(int i=0;i<26;i++){
    if(charCount[i]%2!=0){
        odd_count+=1;
    }
    if(odd_count>1){
        break;
    }
   }


   if(odd_count>1){
    cout << "NO";
   }

   else{
    cout << "YES";
   }

    return 0;
}