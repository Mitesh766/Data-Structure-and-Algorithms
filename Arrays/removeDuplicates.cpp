#include<iostream>
#include<vector>
 using namespace std;

 void removeDupliactes(vector<int> &arr){
     for(int i=0;i<arr.size()-1;i++){
        if(arr[i]==arr[i+1]){
            arr.erase(arr.begin()+i);
            i--;
        }
    }
 for(auto it: arr){
        cout << it << ' ';
    }
 
 }


 int main(){
    vector<int> arr= {1,1,1,2,3,3,4,4,4,4,5,6,6};

    removeDupliactes(arr);
   
   
    return 0;
 }