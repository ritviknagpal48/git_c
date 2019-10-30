#include <iostream>
using namespace std;
void Quick_sort(int *arr, int n)
{
}
void mergeSort(int *arr, int n)
{
}
int main()
{
    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    int *arr1 = new int[n];
    int *arr2 = new int[n];
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    cout << "Sorted using merge sort:";
    mergeSort(arr1, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    cout << "Sorted using quick sort:";
    Quick_sort(arr2, n);
    for (int i = 0; i < n; ++i)
    {
        cout << arr2[i] << " ";
    }
    cout << endl
         << endl;
}
