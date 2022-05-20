
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.LinkedList;

public class Keyboard {

    public static void main(String[] abc) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s;

        while ((s = br.readLine()) != null) {
            LinkedList<Character> value = new LinkedList<>();
            int pointerLocation = 0;
            for (char c : s.toCharArray()) {
                switch (c) {
                    case '[':
                        pointerLocation = 0;
                        break;
                    case ']':
                        pointerLocation = value.size();
                        break;
                    default:
                        value.add(pointerLocation++, c);
                        break;
                }
            }

            StringBuilder sb = new StringBuilder();
            value.forEach((c) -> {
                sb.append(c);
            });
            System.out.println(sb.toString());
        }
    }
}
