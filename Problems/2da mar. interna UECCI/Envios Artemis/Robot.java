
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Robot {

    public static void main(String[] abc) throws IOException {
        Scanner sc = new Scanner(System.in);
        int testCaseCount = sc.nextInt();
        for (int testCase = 0; testCase < testCaseCount; testCase++) {
            int commandCount = sc.nextInt();
            String[] commands = new String[commandCount];
            sc.nextLine();
            for (int i = 0; i < commandCount; i++) {
                String currCommand = sc.nextLine();
                if (currCommand.contains("SAME AS ")) {
                    commands[i] = commands[Integer.parseInt(currCommand.substring(8, currCommand.length())) - 1];
                } else {
                    commands[i] = currCommand;
                }
            }

            int p = 0;
            for (int i = 0; i < commandCount; i++) {
                if (commands[i].equals("LEFT")) {
                    p--;
                } else {
                    p++;
                }
            }

            System.out.println(p);
        }
    }
}
