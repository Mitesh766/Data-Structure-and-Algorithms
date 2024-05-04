#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> tempArr = {};

    int left = start;
    int right = mid + 1;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            tempArr.push_back(arr[left]);
            left++;
        }
        else
        {
            tempArr.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        tempArr.push_back(arr[left]);
        left++;
    }

    while (right <= end)
    {
        tempArr.push_back(arr[right]);
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        arr[i] = tempArr[i - start];
    }
}

void mS(int arr[], int start, int end)
{
    if (start == end)
        return;
    int mid = (start + end) / 2;
    mS(arr, start, mid);
    mS(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

int main()
{
    int arr[] = {2, 1, 3, 6, 3, 2, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    mS(arr, 0, size-1);
    for (int element : arr)
    {
        cout << element << " ";
    }
    return 0;
}