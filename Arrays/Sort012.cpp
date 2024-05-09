//Sort an array of 0's ones and 2's

#include<iostream>

using namespace std;

int main(){
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) c1++;
        else if(arr[i]==1) c2++;
        else c3++;
    }
    c2=c1+c2;
    c3=c2+c3;
    for(int i=0;i<n;i++){
        if(i<c1){
            arr[i]=0;
        }
        else if(i<c2){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }

    }

    for(int element :arr){
        cout << element << " ";
    }
    return 0;
}