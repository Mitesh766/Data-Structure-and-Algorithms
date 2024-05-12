// Given an array , find max subarray sum , min size of subarray=1;

#include<iostream>
#include<limits.h>

using namespace std;


//TC O(N^3)
//SC O(1)
void maxSumBrute(int arr[],int n){
   int sum=0;
   int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
             for(int k=i;k<=j;k++){
                sum+=arr[k];
             }
             if(sum>maxSum){
                maxSum=sum;
             }
             sum=0;
        }
    }

    cout << maxSum;

}


//TC = O(N^2)
//SC=O(1)
void maxSumBetter(int arr[],int n){

    int sum=0;
    int maxSum=INT_MIN;
    if(n==1) maxSum=arr[0];
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
           sum+=arr[j];
           maxSum=max(sum,maxSum);
        }
    }

    cout << maxSum;

}


void maxSumOptimal(int arr[],int n){
    int sum=0;
    int maxSum=INT_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    maxSum=max(sum,maxSum);
    if(sum<0) sum=0;
}

cout << maxSum;

}


int main(){
   int arr[]={-2,-3,-4,-1,-2,-1,-5,-3};
   int n=sizeof(arr)/sizeof(arr[0]);

   maxSumOptimal(arr,n);
    return 0;
}