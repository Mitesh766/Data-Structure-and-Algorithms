// Given an array and target
// variety 1 :- is the sum of two elements = target possible , yes/no
// variety 2 :- two elements are present for sure , return the indexes whose sum=target

#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

bool is2Sum(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==target){
                return 1;
                // if indexes required return i,j
            }
        }
    }
    return 0;
}


//TC is O(N log (m))
//SC is O(N)
//optimal for find indices
void  is2SumBetter(int arr[],int n,int target){
    map<int,int> myMap;
    bool isSum=false;
    for(int i=0;i<n;i++){
        int rem=target-arr[i];
        if(myMap.find(rem)!=myMap.end()){
            isSum=true;
            cout <<  "True" << endl;
            cout << i << " " << myMap[rem];
            break;
        }
        myMap[arr[i]]=i;
    }
  if(!isSum){
    cout << "False";
  }
  for(auto it :myMap){
    cout << it.first << " " << it.second << endl;
  }

}


// optimal for checking if sum is possible or not
// TC = O(nlogn)
//SC =O(1)
void is2SumOptimal(int arr[],int n,int target){
    sort(arr,arr+n);
    int i=0;
    int j=n-1;
    bool IsSumPossible=false;
    while(i<j){
        if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]==target){
            IsSumPossible=true;
            cout << "True";
            break;
        }
    }
    if(!IsSumPossible){
        cout << "False";
    }

}

int main(){
    int arr[]={2,6,5,8,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=1;
     is2SumOptimal(arr,n,target);
    return 0;
}