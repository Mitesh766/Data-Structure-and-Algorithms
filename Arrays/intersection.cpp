#include <bits/stdc++.h>

using namespace std;

void intersectionArray(vector<int> a, vector<int> b)
{
    int visited[b.size()] = {0};
    vector<int> intersection;
    int n = a.size();
    int m = b.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i] == b[j] && visited[j] == 0)
            {
                visited[j] = 1;
                intersection.push_back(a[i]);
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }
    for (auto it : intersection)
    {
        cout << it << " ";
    }
}

void intersectionOptimal(vector<int> a, vector<int> b)
{
    int i=0;int j=0;
    int n=a.size();
    int m =b.size(); 
    vector<int> intersectionArray;
    while(i< n && j < m){
        if(a[i]==b[j]){
            intersectionArray.push_back(a[i]);
            i++;
            j++;
        }
        else if(b[j]<a[i]){
            j++;
        }
        else{
            i++;
        }
    }
    for(auto it : intersectionArray){
        cout << it << " ";
    }


}

int main()
{
    vector<int> a = {1, 1, 2, 3, 3, 4, 5,6};
    vector<int> b = {2, 4, 4, 5, 6};
//   intersectionArray(a,b);

  // tc ==> O(n1+n2)
  // sc=> O(n1+n2)
    intersectionOptimal(a,b);

    return 0;
}