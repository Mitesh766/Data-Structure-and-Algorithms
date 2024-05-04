#include<bits/stdc++.h>

using namespace std;


vector<int> findUnion(vector<int> a, vector<int> b) {
vector<int> unionArray;
int n1=a.size();
int n2=b.size();
int i=0;
int j=0;
while(i<n1 && j<n2){
  if(a[i]<=b[j]){
    if( unionArray.size()==0 || a[i]!=unionArray.back()){
      unionArray.push_back(a[i]);
    }
    i++;
  }
  else{
    if(unionArray.size()==0 ||  b[j]!=unionArray.back()){
      unionArray.push_back(b[j]);
    }
    j++;
  }
}

while(i<n1){
     if( unionArray.size()==0 || a[i]!=unionArray.back()){
      unionArray.push_back(a[i]);
    }
    i++;
}

while(j<n2){
  if(unionArray.size()==0 ||  b[j]!=unionArray.back()){
      unionArray.push_back(b[j]);
    }
    j++;

}
  return unionArray;
}

int main(){
    vector<int> a={1,1,2,3,4,5};
    vector<int> b={2,3,4,4,5,6};
    

    //tc to find union is O(n+m);
    // sc O(n+m) in worst case,  to return the union array
    vector<int> newArray=findUnion(a,b);

    for(auto it : newArray){
        cout << it << " ";
    }

    return 0;
}