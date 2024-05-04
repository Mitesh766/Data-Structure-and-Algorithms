#include <bits/stdc++.h>

using namespace std;

int getMax(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}


void secondOrder(int arr[] , int size){
    int max=INT_MIN;
    int secMax=-1;
    int min=INT_MAX;
    int secMIN=-1;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
        secMax=max;
        max=arr[i];
        }
        else if(arr[i]<max && arr[i]>secMax){
            secMax=arr[i];

        }

        if(arr[i]<min){
            secMIN=min;
            min=arr[i];
        }
        else if(min!=arr[i] && arr[i]<secMIN){
            secMIN=arr[i];
        }
    }

    

    cout << secMIN <<  " " << secMax ;
}

int main()
{
    int arr[] = {1,1,1,1,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    secondOrder(arr, size);

    return 0;
}