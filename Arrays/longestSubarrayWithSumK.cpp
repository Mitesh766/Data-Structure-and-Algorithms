#include <bits/stdc++.h>
using namespace std;

void longestSubArrayWithSumKBrute1(int arr[], int n, int k)
{
    int sum = 0;
    int maxLength = 0;
    for (int m = 0; m < n; m++)
    {
        for (int i = 0; i < n - m; i++)
        {
            sum = 0;
            for (int j = i; j < i + 1 + m; j++)
            {
                sum += arr[j];
            }
            if (sum == k)
            {
                maxLength = m + 1;
                break;
            }
        }
    }
    cout << maxLength;
}

void longestSubArrayWithSumKBrute2(int arr[], int n, int k)
{
    int sum = 0;
    int maxLength = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                maxLength = max(j - i + 1, maxLength);
            }
            if (sum > k)
                break;
        }
    }

    cout << maxLength;
}

void longestSubArrayBetterForZeros(int arr[], int n, int k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;

        // if it does find the rem , it returns end ==> end!=end => false , if it finds the element , it points to the index of that element & that index!= end ==> true.
        //checking if the remainder exists in the map or not
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }


        // adding the current prefix sum "sum" to the map if it doesn't exist
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i;
        }
    }
    cout << maxLen;
}



// TC will be O(N log n) if using orderd map , TC will be O(N*1) if using unordered map , in worst case using unorderd map , it can go to O(N*N)
//SC=O(N)
// *Most optimal if it has all three , positive, negative and zeros 
void longestSubArrayWithSumKBetter(int arr[], int n ,int k){
    long long sum=0;
    int maxLength=0;
    map<long long ,int> prefixSum;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==k){
            maxLength=max(maxLength,i+1);
        }
        int diff=sum-k;

        // finding if difference exists in it or not
        if(prefixSum.find(diff) != prefixSum.end()){
            int len=i-prefixSum[diff];
            maxLength=max(len,maxLength);
        }

        if(prefixSum.find(sum)==prefixSum.end()){
            prefixSum[sum]=i;
        }

    }

    cout << maxLength;
}



// best if only positive integers and zero are there

//TC is O(2N)
// SC is O(1)
void longestSubArrayWithSumKOptimal(int arr[],int n,int k){
    int right=0;
    int left=0;
    long long sum=arr[0];
    int maxLength=0;
    while(right<n){
        while(left<=right && sum>k ){
            sum-=arr[left];
            left++;
        }
        if(sum == k){
            maxLength=max(maxLength,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    cout << maxLength;
}

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, 2, 4, 2};
    // int arr[] = {2,0,0,3};
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    longestSubArrayWithSumKOptimal(arr, n, k);

    return 0;
}
