#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b)
{
   int temp = a;
   a=b;
   b=temp;
    
}
void SelectionSort(int n, int a[])
    {
       for(int i=0;i<n-1;i++)
       {
           int min=i;
        for(int j=i;j<=n-i-1;j++)
        {
                  if(a[j]<a[min])
                  {
                      min=j;
                      
                  }
        }
        swap(a[i],a[min]);
       }
    }


int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    SelectionSort(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    return 0;
}