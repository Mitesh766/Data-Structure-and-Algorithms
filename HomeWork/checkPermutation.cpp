// Check Permutation: Given two strings, write a method to decide if one is a permutation of the 
// other. 

#include<bits/stdc++.h>

using namespace std;

int main(){
    string str1,str2;
    cin >> str1;
    cin >> str2;
    int charCount1[257]={0};
    int charCount2[257]={0};
    for(int i=0;i<str1.length();i++){
        charCount1[str1[i]]++;
    }
    for(int i=0;i<str2.length();i++){
        charCount2[str2[i]]++;
    }
    bool isPermutation=true;
    for(int i=0;i<257;i++){
        if(charCount1[i]!=charCount2[i]){
            isPermutation=false;
            break;
        }  
    }
    cout << isPermutation;

    return 0;
}