#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int low, int high, int val)
{
    if (high >= low)
    {
        int mid = low + (high - low)/2;
        if (val == arr[mid])
            return mid;
        if (val > arr[mid])
            return binarySearch(arr, (mid + 1), high, val);
        else
            return binarySearch(arr, low, (mid -1), val);
    }
    return -1;
}



int main()
{
  
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
    
    int count = 0, i;
    sort(arr, arr+n); 
    for (i = 0; i < n-1; i++)
        if (binarySearch(arr, i+1, n-1, arr[i] + k) != -1)
        {
            count++;
        }
    cout<<count;
    return 0;
}
