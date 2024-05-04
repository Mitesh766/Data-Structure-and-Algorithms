#include<iostream>
#include<vector>
 using namespace std;

 void countUnique(vector<int> &arr){
    int j=0;
     for(int i=1;i<13;i++){
        if(arr[i]!=arr[j]){
            arr[j+1]=arr[i];
            j++;
        }
    }

 cout << j+1;
 }


 int main(){
    vector<int> arr= {1,1,1,2,3,3,4,4,4,4,5,6,6};

    countUnique(arr);
   
   
    return 0;
 }