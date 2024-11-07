import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        Random random = new Random();
        System.out.println("Array uzunligini kiriting: ");
        int size=scanner.nextInt();
        int[] array=new int[size];
        for (int i = 0; i < array.length; i++) {
            array[i] = random.nextInt(size);
            System.out.print(array[i]+" ");
        }
        System.out.println();
        System.out.println("Target: ");
        int target = scanner.nextInt();


        int index = searchInsert(array, target);
        System.out.println(index + " - index");
    }
    public static int searchInsert(int[] nums, int target) {
        int left = nums[0], right = nums.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
}