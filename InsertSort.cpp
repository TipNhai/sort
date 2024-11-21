#include <iostream>
// không dùng cho các bài dữ liệu lớn , phức tạp
using namespace  std;
void InsertSort(int a[],int n)
{
    for (int i=1;i<n;i++)
    {
        int value =a[i];
        int index=i;
        while (index>0 && a[index-1]>value)
        {
            a[index]=a[index-1];
            index--;
        }
        a[index]=value;
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
    InsertSort(a,n);
    // trong c++ khi truyền mảng vào cx đồng nghĩa con trỏ đã được trỏ vào phần tử đầu của mảng 
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}