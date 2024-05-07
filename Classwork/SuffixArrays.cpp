#include<iostream>

using namespace std;

void suffixSum(int arr[],int n){
    int suffixSumArray[n]={0};
    suffixSumArray[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffixSumArray[i]=suffixSumArray[i+1]+arr[i];
    }
    for(int element : suffixSumArray){
        cout << element << " ";
    }
}

void suffixMax(int arr[],int n){
    int suffixMaxArray[n]={0};
    suffixMaxArray[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>suffixMaxArray[i+1]){
  suffixMaxArray[i]=arr[i];
        }
        else{
            suffixMaxArray[i]=suffixMaxArray[i+1];
        }
    }

    for(int element : suffixMaxArray){
        cout << element << " ";
    }
}

void suffixMin(int arr[],int n){
    int suffixMinArray[n]={0};
    suffixMinArray[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]<suffixMinArray[i+1]){
            suffixMinArray[i]=arr[i];
        }
        else{
            suffixMinArray[i]=suffixMinArray[i+1];
        }
    }

    for(int element : suffixMinArray){
        cout << element << " ";
    }

}

int main(){
   int arr[]={-5,11,3,3,-1,10,0,8,9};
   int n=sizeof(arr)/sizeof(arr[0]);
   suffixSum(arr,n);
    return 0;
}