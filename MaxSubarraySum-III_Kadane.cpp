// Kadane's Algorithm (n)

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    int curr_sum=0;
    int max_sum=0;

    for(int i=0;i<n;i++)
    {
       cin>>a[i]; 
    }

    // Kadane Algo

    for(int i=0;i<n;i++)
    {
        curr_sum += a[i];
        if(curr_sum < 0)
        {
            curr_sum=0;
        }
        max_sum = max(max_sum, curr_sum);
    }
    cout<<max_sum;
return 0;
}