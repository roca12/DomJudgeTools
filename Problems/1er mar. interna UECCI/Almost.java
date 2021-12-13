
import java.io.*;
import java.util.*;

class Main  {
    public static HashMap<Integer, ArrayList<SimpleEdge>> adjList;
    public static ArrayList<ArrayList<Integer>> edges;
    public static int[] degrees;
    
    public static Comparator<Edge> costComparator = new Comparator<Edge>() {
        public int compare(Edge e1, Edge e2) {
            return e1.cost-e2.cost;
        }
    };
    
    public static int dijkstraShortestPath(int start, int end, int numPoints, boolean firstDijkstra) {
        Queue<Edge> queue = new PriorityQueue<Edge>(numPoints, costComparator);
        queue.add(new Edge(start, 0, new ArrayList<Integer>()));
        
        int[] visited = new int[numPoints];
        
        int shortestPath = -1;
        boolean firstAnswer = true;
        while (queue.size() > 0) {
            Edge curr = queue.poll();
            int currPoint = curr.point;
            int currCost = curr.cost;
            ArrayList<Integer> currParents = (ArrayList<Integer>) curr.parents.clone();
            
            currParents.add(currPoint);
            if (currPoint == end) {
                if (firstDijkstra) {
                    if (firstAnswer) {
                        shortestPath = currCost;
                        firstAnswer = false;
                    }
                    if (currCost == shortestPath) {
                        edges.add(currParents);
                    }
                    else {
                        return -1;
                    }
                }
                else {
                    return currCost;
                }
            }

            if ((currPoint != 0) && visited[currPoint] >= degrees[currPoint]) {
                continue;
            }
            visited[currPoint]++;

            ArrayList<SimpleEdge> reachPoints = adjList.get(currPoint);
            for (int i = 0; i < reachPoints.size(); i++) {
                queue.add(new Edge(reachPoints.get(i).point, reachPoints.get(i).cost+currCost, currParents));
            }
        }
        
        return -1;
    }
    
    public static int reader(BufferedReader br) throws NumberFormatException, IOException {      
        int n;
        int resp = 0;      
       
        while (true) {          
            n = br.read();          
            if (n >= '0' && n <= '9') {
                break;
            }
        } 
            
        while (true) {          
            resp = resp*10 + n-'0';          
            n = br.read();          
            if (n < '0' || n > '9') {
                break;      
            }
        }
       
        return resp;      
    }
    
    public static void process() throws NumberFormatException, IOException {   
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int numPoints = reader(br);
        int numRoutes = reader(br);
        while (numPoints != 0 || numRoutes != 0) {
            int start = reader(br);
            int end = reader(br);
            
            adjList = new HashMap<Integer, ArrayList<SimpleEdge>>();
            for (int i = 0; i < numPoints; i++) {
                adjList.put(i, new ArrayList<SimpleEdge>());
            }
            
            degrees = new int[numPoints];
            for (int i = 0; i < numRoutes; i++) {
                int p1 = reader(br);
                int p2 = reader(br);
                int cost = reader(br);
            
                adjList.get(p1).add(new SimpleEdge(p2, cost));
                degrees[p2]++;
            }
            
            edges = new ArrayList<ArrayList<Integer>>();
            int cost = dijkstraShortestPath(start, end, numPoints, true);
            
            for (int i = 0; i < edges.size(); i++) {
                int previousPoint = edges.get(i).get(0);
                for (int j = 1; j < edges.get(i).size(); j++) {
                    ArrayList<SimpleEdge> list = adjList.get(previousPoint);
                    for (int k = 0; k < list.size(); k++) {
                        int point = list.get(k).point;
                        if (point == edges.get(i).get(j)) {
                            list.remove(k);
                        }
                    }
                    previousPoint = edges.get(i).get(j);
                }
            }
            
            System.out.println(dijkstraShortestPath(start, end, numPoints, false));
            
            numPoints = reader(br);
            numRoutes = reader(br);
        }
                
        return;
    }
   
    public static void main(String[] args) throws NumberFormatException, IOException {
        Main m = new Main();
        m.process();

        System.exit(0);
    }
}

class SimpleEdge {
    int point;
    int cost;
    
    public SimpleEdge(int point, int cost) {
        this.point = point;
        this.cost = cost;
    }
}

class Edge {
    int point;
    int cost;
    ArrayList<Integer> parents;
    
    public Edge(int point, int cost, ArrayList<Integer> parents) {
        this.point = point;
        this.cost = cost;
        this.parents = parents;
    }
}
