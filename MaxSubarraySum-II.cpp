// Cummulative Sum (n^2)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[50], cumSum[50] = {0}, right = -1, left = -1, currentSum = 0, maxSum = 0;
    // Input elements of array and do cummulative sum
    cin >> arr[0];
    cumSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        cumSum[i] = cumSum[i - 1] + arr[i];
    }
    // Maximum sum of subarray
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            currentSum = 0;
            currentSum = cumSum[j] - cumSum[i - 1];
            if (currentSum > maxSum)
            {
                maxSum = currentSum;
                left = i;
                right = j;
            }
        }
    }
    cout << "Maximum sum of subarray is : " << maxSum << endl;
    cout << "Subarray is : ";
    for (int k = left; k <= right; k++)
    {
        cout << arr[k] << ",";
    }
    return 0;
}