#include<iostream>

using namespace std;

int main(){
    int arr[]={1,2,3,3};
    bool isSorted=true;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0])-1;i++){
        if(arr[i+1]<arr[i]){
            cout << "Not sorted";
            isSorted=false;
            break;
        }


    }
if(isSorted) cout << "Sorted";
    return 0;
}