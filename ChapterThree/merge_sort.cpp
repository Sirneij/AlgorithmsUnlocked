#include <bits/stdc++.h>

using namespace std;

void mergeNewArray(int arr[], int firstArray[], int n1, int secondArray[], int n2)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (firstArray[i] <= secondArray[j])
        {
            arr[k] = firstArray[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = secondArray[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = firstArray[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = secondArray[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[], int n)
{
    if (n >= 2)
    {
        int mid = n / 2;
        int firstArray[mid];
        int secondArray[n - mid];
        for (int i = 0; i < mid; i++)
            firstArray[i] = arr[i];
        int numOfElementInFirst = sizeof(firstArray) / sizeof(firstArray[0]);
        for (int i = mid; i < n; i++)
            secondArray[i - mid] = arr[i];
        int numOfElementInSecond = sizeof(secondArray) / sizeof(secondArray[0]);
        merge_sort(firstArray, numOfElementInFirst);
        merge_sort(secondArray, numOfElementInSecond);
        mergeNewArray(arr, firstArray, numOfElementInFirst, secondArray, numOfElementInSecond);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 4, 1, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    merge_sort(arr, n);
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