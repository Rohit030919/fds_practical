def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key

my_array = [89,99,87,78,80,86,93,94,92]
insertion_sort(my_array)
print("Sorted marks using insertion sort:", my_array)

def shell_sort(arr):
    n = len(arr)
    gap = n // 2

    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j = j - gap
            arr[j] = temp
        gap //= 2

my_array1 = [89,99,87,78,80,86,93,94,92]
shell_sort(my_array1)
print("Sorted percentage using shell sort:", my_array1)
