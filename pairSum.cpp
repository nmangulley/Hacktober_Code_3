// Two pointers Approach

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val;
    cin >> n >> val;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int st = 0, end = n - 1;

    while (st < end)
    {
        int curr_sum = a[st] + a[end];
        if (curr_sum > val)
        {
            end--;
        }
        else if (curr_sum < val)
        {
            st++;
        }
        else if(curr_sum==val)
        {
            cout<<a[st]<<" and "<<a[end]<<endl;
            st++;
            end--;
        }
    }
    return 0;
}

