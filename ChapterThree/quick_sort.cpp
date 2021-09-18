#include <bits/stdc++.h>
using namespace std;

int partitioning(int arr[], int start, int end)
{
    int pIndex = start;
    // cout << "Start: " << pIndex << endl;
    int pivot = arr[end]; //7
    // cout << "Pivot: " << pivot << endl;
    for (int i = start; i < end; i++)
    {
        if (arr[i] <= pivot)
        {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[end]);
    // cout << "Pivot Index: " << pIndex << endl;
    return pIndex;
}

void quick_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int pIndex = partitioning(arr, start, end);
        quick_sort(arr, start, pIndex - 1);
        quick_sort(arr, pIndex + 1, end);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {10, 80, 30, 90, 40, 50, 70, 1, 2}; //{3, 2, 4, 1, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    quick_sort(arr, 0, n - 1);
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}