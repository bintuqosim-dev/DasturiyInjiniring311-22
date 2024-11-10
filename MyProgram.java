import java.util.Scanner;

public class MyProgram {

    // Massivning o'sish tartibida tartiblanganligini tekshiruvchi funksiya
    public static boolean isSorted(int[] arr) {
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] < arr[i - 1]) {
                return false; // Agar kichik qiymat topilsa, massiv tartiblanmagan
            }
        }
        return true; // Agar hech qanday tartibsizlik bo'lmasa, massiv tartiblangan
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Foydalanuvchidan massiv o'lchamini olish
        System.out.print("Massivning o'lchamini kiriting: ");
        int n = scanner.nextInt();

        int[] arr = new int[n];

        // Massiv elementlarini olish
        System.out.println("Massiv elementlarini kiriting:");
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Massiv tartiblanganligini tekshirish va natijani chiqarish
        if (isSorted(arr)) {
            System.out.println("Massiv o'sish tartibida tartiblangan.");
        } else {
            System.out.println("Massiv o'sish tartibida tartiblanmagan.");
        }

        scanner.close();
    }
}