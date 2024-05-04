#include<bits/stdc++.h>

using namespace std;

int main(){
  int arr[]={0,1,2,3,4,5,6,7,8,10};
  int n=11;
  int ans=0;
  // using n-1 in sum as we are including zero also
// first approach (n-1)*((n-1)+1)/2 - sum of all present in array , if number is 10^5 ans would be 10^10 which could not be stored  in int , therefore second approach with zor is better
  // xor does not exceeds the largest element, therefore this apprach is used 
  for(int i=0;i<n-1;i++){
    ans=ans ^arr[i]^ (i);

  }

  ans^=n-1;
  cout << ans;
    return 0;
}