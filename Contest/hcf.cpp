#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int x;
        cin >> x;
        if(x%2==0) cout << x/2;
        else cout << x-1;
    }
    
    return 0;
}