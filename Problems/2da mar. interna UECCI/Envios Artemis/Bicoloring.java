
import java.util.*;

public class Bicoloring {

    static int V;

    static boolean isBipartite(int G[][], int src) {

        int colorArr[] = new int[V];
        for (int i = 0; i < V; ++i) {
            colorArr[i] = -1;
        }

        colorArr[src] = 1;

        LinkedList<Integer> q = new LinkedList<>();
        q.add(src);
        while (!q.isEmpty()) {

            int u = q.poll();

            if (G[u][u] == 1) {
                return false;
            }

            for (int v = 0; v < V; ++v) {

                if (G[u][v] == 1 && colorArr[v] == -1) {

                    colorArr[v] = 1 - colorArr[u];
                    q.add(v);
                } else if (G[u][v] == 1 && colorArr[v] == colorArr[u]) {
                    return false;
                }
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int E;
        V = sc.nextInt();
        while (V != 0) {
            E = sc.nextInt();
            int G[][] = new int[V][V];
            for (int i = 0; i < E; i++) {
                int aux1, aux2;
                aux1 = sc.nextInt();
                aux2 = sc.nextInt();
                G[aux1][aux2] = 1;
                G[aux2][aux1] = 1;
            }
            if (isBipartite(G, 0)) {
                System.out.println("BICOLORABLE.");
            } else {
                System.out.println("NOT BICOLORABLE.");
            }
            V = sc.nextInt();
        }
    }
}
