#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[], int n)
{
    for (size_t i = 1; i <= n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 4, 1, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, 8);
    cout << "[";
    for (size_t i = 0; i < n; i++)
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