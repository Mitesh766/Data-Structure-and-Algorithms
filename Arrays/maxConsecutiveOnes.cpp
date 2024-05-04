#include<bits/stdc++.h>

using namespace std;

int main(){
     int arr[]={1,1,0,1,1,1};
     int n=sizeof(arr)/sizeof(arr[0]);
     int maxCount=0;
     int count=0;
     for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] && arr[i]==1){
            count++;
        }
        else{
            if(count>maxCount){
            maxCount=count;
            count=0;
        }

        }
        

     }
     if(arr[n-1]==1) maxCount++;
      cout << maxCount;

    return 0;
}