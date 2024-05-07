#include <bits/stdc++.h>

using namespace std;

int prefixSum(int arr[], int length,int ind)
{
    int prefixSumArray[length];
    prefixSumArray[0] = arr[0];

    for (int i = 1; i < length; i++)
    {
        prefixSumArray[i] = prefixSumArray[i - 1] + arr[i];
    }
    
    return prefixSumArray[ind];
}

void prefixMax(int arr[] ,int length){
int prefixMaxArray[length];
prefixMaxArray[0]=arr[0];
for(int i=1;i<length;i++){
    if(arr[i]>prefixMaxArray[i-1]){
        prefixMaxArray[i]=arr[i];
    }
    else{
        prefixMaxArray[i]=prefixMaxArray[i-1];
    }
}

for(int element : prefixMaxArray){
    cout << element << " ";
}
}

void prefixMin(int arr[],int length){
int prefixMinArray[length]={0};
prefixMinArray[0]=arr[0];
for(int i=1;i<length;i++){
    if(arr[i]<prefixMinArray[i-1]){
        prefixMinArray[i]=arr[i];
    }
    else{
        prefixMinArray[i]=prefixMinArray[i-1];
    }
}

for(int element : prefixMinArray){
 cout << element;
}
}
        
int main()
{
    int arr[] = {1, 2, 2, 4, 0, 6,-1,3,4,3};

    int length = sizeof(arr) / sizeof(arr[0]);
    // prefixSum(arr, length);
     int q;
     cin >> q;
     while(q--){
        int l,r;
        cin >> l;
        cin >> r;
        if(l==0){
            cout << prefixSum(arr,length,r);
        }
        else{

    cout << prefixSum(arr,length,r)- prefixSum(arr, length,l-1);
        }

     }

    return 0;
}