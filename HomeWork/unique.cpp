#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    bool isUnique=true;
    int arr[257]={0};
    for(int i=0;i<str.size();i++){
        arr[str[i]]+=1;
        if(arr[str[i]]>1){
            isUnique=false;
            cout << "Not Unique";
            break;
        }
    }
    if(isUnique){
        cout << "Unique";
    }
    // for(int i=0;i<257;i++){
    //     if(arr[i]>0){
    //     cout << char(i)<< " =====>" << arr[i]  << endl;
    //     }
    // }
    return 0;
}