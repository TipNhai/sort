#include <iostream>

void bubble_sort(int arr[],int n)
{
    int M=arr[0];
for (int i=n-1;i>=0;i--){
    for (int j=0;j<i;j++){
    if(arr[j]>arr[j+1]){
        M=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=M;
    }
    }
}

}

void input_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
}

void print_array(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << array[i] << " ";
    }
}

int main()
{
    int numbers[10];
    int n;

    std::cin >> n;
    
    input_array(numbers, n);
    bubble_sort(numbers, n);
    print_array(numbers, n);

    return 0;
}
