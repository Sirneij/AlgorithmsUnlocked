
#include <bits/stdc++.h>

using namespace std;

void selectionSort(int A[], int n)
{
    for (int i = 0; i < n ; i++)
    {
        int smallest = i;

        for (int j = i+1; j < n; j++)
        {
            if (A[j] < A[smallest])
            {
                smallest = j;
            }
        }
        int tmp = A[i];
        A[i] = A[smallest];
        A[smallest] = tmp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 4, 1, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    cout << "[";
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i < n-1)
        {
            cout << ", ";
        }
        
    }
    
    cout << "]" << endl;

    return 0;
}
