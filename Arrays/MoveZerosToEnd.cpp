#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,0,2,3,2,0,0,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++){
        arr[i]=0;
    }

    for(int element : arr){
        cout << element << " ";
    }
    return 0;
}