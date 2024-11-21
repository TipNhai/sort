#include <iostream>
using namespace std;
// đây là bản nâng cấp của insertSort
void ShellSort(int a[],int n)
{
    int temp,j;
    //tạo các khoảng để sắp xếp
    for (int interval=n/2;interval>0;interval/=2)
    {
        // tạo i = từ 0 đến vị trí để có khoảng gần nhất , tiếp tục tăng i để có các khoảng của các phần tử tiếp theo 
        for (int i=interval;i<n;i++)
        {
            // lưu giá trị của các phần tử cách nhau 1 khoảng để so sánh và sắp xếp
            temp=a[i];
            //sắp các phần tử cách nhau 1 khoảng ,và trả về vị trí thích hợp để chèn temp
            for (j=i;j>=interval && a[j-interval]>temp;j-=interval)
            {
                a[j]=a[j-interval];
            }
            a[j]=temp;
        }
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
    ShellSort(a,n);
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}