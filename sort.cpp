#include<iostream>
using namespace std;
void quick_sort(int* arr, int n)
{
    if(n <= 1)
    {
        return;
    }
    int temp = arr[0];
    int index = 0;
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] < temp)
        {
            index++;
        }
    }
    int k = arr[index];
    arr[index] = arr[0];
    arr[0] = k;
    int i = 0;
    int j = n-1;
    while(i <= index && j >= index)
    {
        if(arr[i] > arr[index] && arr[j] < arr[index])
        {
            int l = arr[i];
            arr[i] = arr[j];
            arr[j] = l;
            i++;
            j--;
        }
        else if(arr[i] > arr[index])
        {
            j--;
        }
        else if(arr[j] < arr[index])
        {
            i++;
        }
        
    }
    quick_sort(arr, index);
    quick_sort(arr + index + 1, n - index - 1);
    
}
void merge_sort(int* arr, int n)
{
    
}
int main()
{
    int n;
    cout << "Enter the size" << endl;
    cin >> n;
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    cout << "Enter the array" << endl;
    for(int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    cout << "Sorted using merge sort:";
    merge_sort(arr1, n);
    for(int i = 0; i < n; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Sorted using quick sort:";
    quick_sort(arr2, n);
    for(int i = 0; i < n; ++i)
    {
        cout << arr2[i] << " ";
        
    }
    cout << endl;
    
}
