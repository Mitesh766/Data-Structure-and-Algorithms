#include<iostream>

using namespace std;

int getPartitionIndex(int arr[],int low , int high){
     int i=low;
    int j=high;
    int pivot=i;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high-1){
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[pivot],arr[j]);
    return j;
}

void QS(int arr[],int low , int high){
   
    if(low<high){
        int partitionIndex=getPartitionIndex(arr,low,high);
        QS(arr,low,partitionIndex-1);
        QS(arr,partitionIndex+1,high);

    }

   

}

int main(){
 int arr[] ={4,5,1,2,3,4,6,9,7};
 int length=sizeof(arr)/sizeof(arr[0]);
 QS(arr,0,length-1);

 for(int element : arr){
    cout << element;
 }


return 0;
}