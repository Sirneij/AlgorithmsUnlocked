def selection_sort(arr, n):
    for i in range(n - 1):
        smallest = i
        for j in range(i + 1, n):
            if arr[j] < arr[smallest]:
                smallest = j
        tmp = arr[i]
        arr[i] = arr[smallest]
        arr[smallest] = tmp


arr = [3, 2, 4, 1, 8, 6, 9, 7]
selection_sort(arr, len(arr))
print(arr)
