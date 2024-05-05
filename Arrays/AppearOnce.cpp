#include<bits/stdc++.h>

using namespace std;




int main(){
    int arr[]={1,1,2,3,3,4,4,5,6,6,5};
    int uniqueNumber=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        uniqueNumber^=arr[i];
    }
    cout << uniqueNumber;
    return 0;
}