#include<iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int length=str.size();
    for(int i=0;i<length;i++){
        for(int j=i+1;j<length;j++){
            if(str[i]==str[j]){
                cout << "Not unique ";
                break;
            }
        }
    }
    return 0;
}