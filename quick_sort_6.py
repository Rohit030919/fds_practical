def partition(arr, low, high):
    pivot = arr[low]
    i = low + 1

    for j in range(low + 1, high + 1):
        if arr[j] < pivot:
            arr[i], arr[j] = arr[j], arr[i]
            i += 1

    arr[low], arr[i - 1] = arr[i - 1], arr[low]
    return i - 1

def quick_sort(arr, low, high):
    if low < high:
        pivot = partition(arr, low, high)

        quick_sort(arr, low, pivot - 1)
        quick_sort(arr, pivot + 1, high)


my_array = [89,99,87,78,80,86,93,94,92]
quick_sort(my_array, 0, len(my_array) - 1)
print("Sorted percentage using Quick Sort:", my_array)
top = my_array[-5:]
topper = top[::-1]
print("Top five are :", topper)


