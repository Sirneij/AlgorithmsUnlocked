#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {3, 2, 4, 1, 8, 6, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int start = 0, mid = (start + n) / 2;
    int numArrayOne = mid - start;
    int numArrayTwo = n - mid;
    int subOne[numArrayOne], subTwo[numArrayTwo];
    for (int i = 0, j = mid; i < n; i++, j++)
    {
        subOne[i] = arr[i];
        subTwo[j] = arr[j];
        cout << arr[j];
    }

    // cout << "[";
    // for (int i = 0; i < numArrayOne; i++)
    // {
    //     cout << subTwo[i];
    //     if (i < n - 1)
    //     {
    //         cout << ", ";
    //     }
    // }

    // cout << "]" << endl;

    return 0;
}
