
import java.util.Scanner;


public class Nessy {
static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {

        int casos, alto, ancho;

        casos=sc.nextInt();
        while (casos>0) {
            alto=sc.nextInt();
            ancho=sc.nextInt();
            System.out.printf("%d\n", (alto / 3) * (ancho / 3));
            casos--;
        }

    }

}
