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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* node = head, *offsetNode = head;
    for (int i = 0; i < n; ++i)
        node = node->next;
    
    // if node is NULL n is equal to the length of the linked list and we have to remove the head
    if (node == NULL)
        return head->next;
    
    while (node->next != NULL) {
        node = node->next;
        offsetNode = offsetNode->next;
    }
    
    offsetNode->next = offsetNode->next->next;
    
    return head;
    }
};
