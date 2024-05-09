#include <iostream>
#include <map>

using namespace std;

void is2Sum(int arr[], int n, int target)
{
    map<int, int> mpp;
    int sumPossible = 0;

    for (int i = 0; i < n; i++)
    {
        int rem = target - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            sumPossible = 1;
            cout << mpp[rem] << " "<< i;
            break;
        }
        mpp[arr[i]] = i;
    }
    cout << sumPossible;
    
}

bool is2SumBetter(int arr[],int n,int target){
    int i=0;
    int j=n-1;
    while(i<j){
        int sum=arr[i]+arr[j];
  if(sum<target) i++;
  else if(sum>target) j--;
  else if (sum==target) return 1;;
    }

    return 0;
}

void sort012(int arr[],int n){
    int count1=0;
    int count2=0;
    int count3=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count1++;
        }
        else if(arr[i]==1){
            count2++;
        }
        else{
            count3++;
        }
    }
    count2=count2+count1;
    count3=count2+count3;

    for(int i=0;i<n;i++){
        if(i<count1){
            arr[i]=0;
        }
        else if(i<count2){
            arr[i]=1;
        }
        else{
            arr[i]=2;
        }

    }

    for(int i=0;i<n;i++){
        cout << arr[i];
    }
    
}

void DNF(int arr[],int n){
  int low=0;
  int mid=0;
  int high=n-1;
  while(mid<=high){
    if(arr[mid]==0){
       swap(arr[low],arr[mid]);
       low++;
       mid++;
    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid],arr[high]);
            high--;
    }
  }
  
  for(int i=0;i<n;i++){
    cout << arr[i]  << " ";
  }

}

int main()
{
    // int arr[] = {2,0,1,0,0,1,2,2,2,1,1,0,0,1,0,2,0,1,2};
    int arr[]={2,0,2,1,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    // sort012(arr,n);
    DNF(arr,n);

    return 0;
}