
def find_missing_number(arr, n):
    # 1 dan n gacha bo'lgan sonlar yig'indisi
    total_sum = n * (n + 1) // 2
    # Berilgan massivdagi sonlarning yig'indisi
    arr_sum = sum(arr)
    # Yo'qolgan sonni topish
    missing_number = total_sum - arr_sum
    return missing_number

# Misol uchun
arr = [1, 2, 4, 5, 6]
n = 6
print("Yo'qolgan son:", find_missing_number(arr, n))