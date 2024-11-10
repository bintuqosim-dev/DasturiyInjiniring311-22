'''Ushbu muammoni hal qilish uchun biz rekursiyadan foydalanishimiz mumkin,
chunki har qanday Fibonachchi soni n oldingi ikkita Fibonachchi raqamiga bog'liq.
 Shuning uchun, bu yondashuv muammoni asosiy holatlarga yetguncha qayta-qayta buzadi.

Qaytalanish munosabati:
Asosiy holat: F(n) = n, n = 0 yoki n = 1 bo'lganda
Rekursiv holat: n>1 uchun F(n) = F(n-1) + F(n-2)'''


def nth_fibonacci(n):
    # Base case: if n is 0 or 1, return n
    if n <= 1:
        return n
    # Recursive case: sum of the two preceding Fibonacci numbers
    return nth_fibonacci(n - 1) + nth_fibonacci(n - 2)
n = 5
result = nth_fibonacci(n)
print(result)
