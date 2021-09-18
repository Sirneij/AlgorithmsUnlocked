def linear_loop(array, x):
    # for element array:
    #     if element == x:
    #         return element
    for i in range(len(array)):
        if array[i] == x:
            return i

    return -1

def linear_recursive(array,x, i):
    if 