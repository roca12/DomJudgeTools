
import java.util.Scanner;
public class Main {
public static void main(String[] args) {
        new Main();
    }
public Main() {
        Scanner sc = new Scanner(System.in);
        int n=1, i,suma=0;
           while (sc.hasNextInt() && n != 0) {
            n = sc.nextInt();
            if(n==0)
                break;
             for (int j = n; j >=1; j--) {
                       i=(int) Math.pow(j,2);
                   suma+=i;
                    
                }
                 System.out.println(suma);
                 suma=0;
            }
      
        }
    }
