#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int start, int end, int target)
{
    if (start > end)
        return -1;
    else
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
        {
            start = mid + 1;
            return binary_search(arr, start, end, target);
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
            return binary_search(arr, start, end, target);
        }
        else
        {
            return binary_search(arr, start, end, target);
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37,
                 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << binary_search(arr, 0, n, 73);
    return 0;
}
