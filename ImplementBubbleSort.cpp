#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std; 
int main()
{
    int n,b;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for (int i =0;i<n;i++)
    {
        for (int j=n-1;j>i;j--)
        {
            if (arr[i]>arr[j])
            {
                b=arr[i];
                arr[i]=arr[j];
                arr[j]=b;
            }

        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
