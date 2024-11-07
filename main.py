def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

# Foydalanuvchi kiritgan ma'lumot
user_input = input("Ro'yxatdagi elementlarni vergul bilan kiriting: ")
array = [int(item) for item in user_input.split(",")]
sorted_array = bubble_sort(array)
print("Saralangan ro'yxat:", sorted_array)