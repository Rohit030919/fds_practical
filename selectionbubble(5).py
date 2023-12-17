def selection_sort(arr,size):

    for i in range(size):
        min_index = i
        for j in range(i+1,size):
            if arr[j] < arr[min_index]:
                min_index = j
        (arr[i],arr[min_index]) = (arr[min_index],arr[i])

arr = [23,12,21,14,34,43,21,11,1,76]
size = len(arr)
selection_sort(arr,size)
print("The sorted array is :",arr)

def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0,n-i-1):
            if arr[j] > arr[j+1]:
                swapped = True
                arr[j],arr[j+1] = arr[j+1],arr[j]
        if not swapped:
            return

arr = [23,12,21,14,34,43,21,11,1,76]
bubble_sort(arr)
top = arr[-5:]
topper = top[::-1]
print("The sorted array is :",topper)

