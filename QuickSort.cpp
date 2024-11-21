#include <iostream>
#include <algorithm>
using namespace std;
// Thuật toán nhanh nhất và cũng được dùng nhiều
void QuickSort (int a[],int l,int r)
{
    int i=l,j=r;
    // chọn trục để chia mảng thành 2 phần rồi so sánh
    int p=a[(l+r)/2];
    while (i<j)
    {
        // so sánh với trục , nếu không đúng thì dừng lại
        while (a[i]<p)
        {
            i++;
        }
        while (a[j]>p)
        {
            j--;
        }
        // nếu 2 bên đã có 2 phần tử không thỏa điều kiện thì đổi chỗ
        if (i<=j)
        {
            swap(a[i],a[j]);
            //tiếp tục đến index khác
            j--;
            i++;
        }
    }
    //dùng để quy để sắp những phần tử chưa được xếp
    if (i<r)
    {
        QuickSort(a,i,r);
    }
    if (j>l)
    {
        QuickSort(a,l,j);
    }
}
int main()
{
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}