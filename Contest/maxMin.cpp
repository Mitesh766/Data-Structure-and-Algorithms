#include<iostream>

using namespace std ;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
      int x,y;
      cin >>x;
      cin >>y;
      int minel;
      int maxel;
      if(x<y) {minel=x;
          maxel=y;
      }
      else {minel=y;
          maxel=x;
      }
      
      cout << minel << " "<< maxel << "\n";
    }
    
    return 0;
}