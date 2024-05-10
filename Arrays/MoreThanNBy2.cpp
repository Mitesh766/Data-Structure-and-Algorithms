// ?Given an array of size n find which element appears more than n/2 times


#include<iostream>
#include<unordered_map>
#include<limits.h>

using namespace std;


//TC is O(Nlogn + N)
//SC is O(N)
void MoreThanNBy2(int arr[] ,int n){
unordered_map<int,int> mp;
 int maxFrequency=n/2;
    int maxAppearedElement=-1;
for(int i=0;i<n;i++){
    mp[arr[i]]++;
    if(mp[arr[i]]>maxFrequency){
       maxFrequency=mp[arr[i]];
       maxAppearedElement=arr[i];

    }
}
cout << maxAppearedElement;

}

void MooresVotingAlgo(int arr[],int n){
    int element;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            element=arr[i];
            cnt=1;
        }
        else if(arr[i]!=element) cnt--;
        else cnt++;

    }
    int freq=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            freq++;
        }
    }
    if(freq>n/2){
        cout << element;
    }
    else{
        cout << "No Major Element";
    }
}

int main(){
    int arr[]={2,2,3,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
   
    MooresVotingAlgo(arr,n);
    return 0;
}