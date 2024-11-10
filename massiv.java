import java.util.Arrays;

public class massiv {

    // Massivlarni birlashtirish va elementlarni kerakli tartibda joylashtirish
    public static void mergeAndSort(int[] a, int[] b, int n, int m) {
        // Ikkala massivni birlashtiramiz
        int[] merged = new int[n + m];

        // Massivlarni birlashtirish
        System.arraycopy(a, 0, merged, 0, n);
        System.arraycopy(b, 0, merged, n, m);

        // Birlashtirilgan massivni tartiblaymiz
        Arrays.sort(merged);

        // a[] ga eng kichik n ta elementni joylashtirish
        for (int i = 0; i < n; i++) {
            a[i] = merged[i];
        }

        // b[] ga qolgan m ta elementni joylashtirish
        for (int i = 0; i < m; i++) {
            b[i] = merged[n + i];
        }
    }

    public static void main(String[] args) {
        int[] a = {1, 5, 9};  // misol uchun tartiblangan massiv
        int[] b = {2, 6, 8, 10};  // misol uchun tartiblangan massiv

        int n = a.length;
        int m = b.length;

        System.out.println("Dastlabki massivlar:");
        System.out.println("a[]: " + Arrays.toString(a));
        System.out.println("b[]: " + Arrays.toString(b));

        // Massivlarni birlashtirish va kerakli tartibga solish
        mergeAndSort(a, b, n, m);

        System.out.println("\nBirlashtirilgan va tartiblangan massivlar:");
        System.out.println("a[]: " + Arrays.toString(a));
        System.out.println("b[]: " + Arrays.toString(b));
    }
}
