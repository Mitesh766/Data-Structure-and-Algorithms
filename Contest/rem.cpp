#include<iostream>

using namespace std ;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       int n;
       cin >> n;
       int arr[n-1];
       for(int i=0;i<n-1;i++){
           cin >> arr[i];
       }
       int brr[n];
       brr[0]=arr[0]+1;
      
       for(int i=1;i<n-1;i++){
           brr[i]=(brr[i-1]*arr[i])+arr[i-1];
       }
       brr[n-1]=brr[n-2]+arr[n-2];
       for(int i=0;i<n;i++){
           cout << brr[i] << " ";
       }
    }
    
    
    return 0;
}