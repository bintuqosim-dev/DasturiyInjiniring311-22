def calculator():
    print("Oddiy kalkulyator")
    print("Amallar: +, -, *, /")
    while True:
        try:
            # Foydalanuvchidan ma'lumotlarni olish
            num1 = float(input("Birinchi sonni kiriting: "))
            operator = input("Amalni tanlang (+, -, *, /): ")
            num2 = float(input("Ikkinchi sonni kiriting: "))
            # Arifmetik amallarni bajarish
            if operator == "+":
                result = num1 + num2
            elif operator == "-":
                result = num1 - num2
            elif operator == "*":
                result = num1 * num2
            elif operator == "/":
                if num2 == 0:
                    print("Nolga bo'lish mumkin emas!")
                    continue
                result = num1 / num2
            else:
                print("Notog'ri amal tanlandi! Iltimos, qayta urinib ko'ring.")
                continue
            # Natijani butun yoki kasrli son ko'rinishida chiqarish
            if result.is_integer():
                print(f"Natija: {int(result)}")
            else:
                print(f"Natija: {result}")
        except ValueError:
            print("Iltimos, son kiriting!")
        except Exception as e:
            print(f"Xatolik yuz berdi: {e}")
        # Yana davom ettirishni so'rash
        choice = input("Yana hisob-kitob qilasizmi? (ha/yo'q): ").lower()
        if choice != "ha":
            print("Dastur tugadi. Rahmat!")
            break
# Dastur ishga tushiriladi
calculator()