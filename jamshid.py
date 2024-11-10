# Merge Sort algoritmi

def merge_sort(array):
    # Agar massivda bitta yoki hech qanday element bo‘lmasa, tartiblangan hisoblanadi
    if len(array) <= 1:
        return array
    
    # O‘rtasini topib, massivni ikkiga bo‘lish
    mid = len(array) // 2
    left_half = array[:mid]
    right_half = array[mid:]
    
    # Chap va o'ng qismlarni rekursiv tartiblash
    left_sorted = merge_sort(left_half)
    right_sorted = merge_sort(right_half)
    
    # Tartiblangan qismlarni birlashtirish
    return merge(left_sorted, right_sorted)

def merge(left, right):
    result = []
    i = j = 0
    
    # Chap va o‘ng qismlarni birlashtirib, tartiblangan massiv hosil qilish
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    
    # Qolgan elementlarni qo‘shish
    result.extend(left[i:])
    result.extend(right[j:])
    
    return result

# Misol uchun massiv
array = [38, 27, 43, 3, 9, 82, 10]

# Merge Sortni ishlatish
sorted_array = merge_sort(array)
print("Tartiblangan massiv:", sorted_array)
