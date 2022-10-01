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

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       int l=0;
       int r = arr.size()-1;
       while(r-l>=k)
       {
          if(x-arr[l]<=arr[r]-x)
          {
              r--;
          }
           else{
               l++;
           }
       }
        return vector<int>(begin(arr)+l,begin(arr)+r+1);
    }
};


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
