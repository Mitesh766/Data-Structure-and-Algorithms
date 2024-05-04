#include<bits/stdc++.h>

using namespace std;

void rightRotate1(int arr[],int n, int k){

    k=k%n;
reverse(arr,arr+n-k);
reverse(arr+n-k,arr+n);
reverse(arr,arr+n);
}

void rightRotate2(int arr[],int n, int k){
   int tempArr[k];
   for(int i=n-k;i<n;i++){
    tempArr[i-(n-k)]=arr[i];
   }
   for(int i=n-k-1;i>=0;i--){
    arr[i+k]=arr[i];
   }
   for(int i=0;i<k;i++){
    arr[i]=tempArr[i];
   }
}

int main(){
  int arr[]={1,2,3,4,5,6,7,8};
  int k=3;
  int n=sizeof(arr)/sizeof(arr[0]);
//   rightRotate1(arr,n,k);
  rightRotate2(arr,n,k);
  for(int element : arr){
    cout << element;
  }

}