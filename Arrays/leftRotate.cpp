#include <bits/stdc++.h>
using namespace std;

void leftRotateByOnePlace(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;

    //  for(int i=0;i<size;i++){
    //     cout << arr[i] << " ";
    //  }
}

void leftRotateArrayByKPlaces(int arr[], int k, int size)
{   k=k%size;
    int tempArr[k] = {0};
    for (int i = 0; i < k; i++)
    {
        tempArr[i] = arr[i];
    }
   
    for (int i = 0; i < size-k; i++)
    {
        arr[i]=arr[i+k];
    }
    for (int i = size-k ; i < size; i++)
    {
        arr[i]=tempArr[i-(size-k)];
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}


void leftRotateArrayByKPlaces2(int arr[],int k,int size){
    k= (k % size);
    for(int i=0;i<k/2;i++){
        int temp=arr[i];
        arr[i]=arr[k-1-i];
        arr[k-1-i]=temp;
    }
    for(int i=0;i<(size-k)/2;i++){
        int temp=arr[i+k];
        arr[i+k]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

void leftRotateArrayByKPlaces3(int arr[],int k,int size){
 
 reverse(arr,arr+k);
 reverse(arr+k,arr+size);
 reverse(arr,arr+size);
   for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }



}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    //  leftRotateByOnePlace(arr,size);
    leftRotateArrayByKPlaces3(arr, 4, size);

    return 0;
}