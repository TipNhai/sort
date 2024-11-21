#include <iostream>
using namespace std;
// thuật toán sắp xếp đáng lưu tâm nhất
void merge(int a[],int l,int m,int r)
{
    int i,j;
    int n1=m-l+1,n2=r-m;
    int a1[n1],a2[n2];
    // nhập giá trị cho mảng trái
    for (int i=0;i<n1;i++)
    {
        a1[i]=a[l+i];
    }
    // nhập giá trị cho mảng phải 
    for (int j=0;j<n2;j++)
    {
        a2[j]=a[m+1+j];
    }
    i=0,j=0;
    int k=l;
    // sắp xếp giá trị
    while (i<n1 &&j<n2)
    {
        if (a1[i]<=a2[j]) {
            a[k]=a1[i];
            i++;
    }
        else {
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    // cho phần còn lại vào mảng
    while (i<n1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }
    while (j<n2)
    {
        a[k]=a2[j];
        j++;
        k++;
    }
}
void mergeSort(int a[],int l,int r)
{
    if (l<r)
    {
        // đệ quy chia thành 2 phần đến khi mỗi phần chỉ còn 1 phần tử
        int m=(r+l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
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
    mergeSort(a,0,n-1);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}