
import java.util.Arrays;
import java.util.Scanner;

public class EasiestProblem {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int n = s.nextInt();
        int count = 1;
        long[] arr = new long[3];
        while (n-- > 0) {
            arr[0] = s.nextInt();
            arr[1] = s.nextInt();
            arr[2] = s.nextInt();

            Arrays.sort(arr);

            if (arr[0] + arr[1] <= arr[2]) {
                System.out.printf("Case %d: Invalid\n", count++);
            } else if (arr[0] == arr[1] && arr[1] == arr[2]) {
                System.out.printf("Case %d: Equilateral\n", count++);
            } else if (arr[0] == arr[1] || arr[1] == arr[2]) {
                System.out.printf("Case %d: Isosceles\n", count++);
            } else if (arr[1] != arr[2] && arr[1] != arr[0] && arr[2] != arr[0]) {
                System.out.printf("Case %d: Scalene\n", count++);
            }

        }
    }
}
