
// https://codeforces.com/contest/1037/problem/D
import java.util.*;

public class CF1037D {
  static Scanner sc = new Scanner(System.in);
  static int n;

  public static void main(String[] args) {
    Queue<Node> q = new LinkedList<Node>();
    n = sc.nextInt();
    ArrayList<Integer>[] adj = new ArrayList[n];
    Node[] nodes = new Node[n];
    int[] sequence = new int[n];
    boolean[] visited = new boolean[n];
    for (int i = 0; i < n; i++) {
      adj[i] = new ArrayList<Integer>();
    }

    for (int i = 0; i < n - 1; i++) {
      int u = sc.nextInt() - 1;
      int v = sc.nextInt() - 1;

      adj[u].add(v);
      adj[v].add(u);
    }

    for (int i = 0; i < n; i++) {
      sequence[i] = sc.nextInt() - 1;
    }

    // Source is Vertex 1
    q.add(new Node(0, 0, -1));
    visited[0] = true;

    while (q.size() > 0) {
      Node node = q.poll();
      int u = node.number;
      int level = node.level;

      nodes[u] = node;

      for (int v : adj[u]) {
        if (!visited[v]) {
          visited[v] = true;
          // Increment level for vertex's children
          q.add(new Node(v, level + 1, u));
        }
      }
    }

    if (isValid(sequence, nodes)) {
      System.out.println("Yes");
    } else {
      System.out.println("No");
    }
  }

  private static boolean isValid(int[] sequence, Node[] nodes) {
    int[] indexOfAppearance = new int[n];
    boolean[] hasVisitedLevel = new boolean[n];
    int currLevel = 0;
    Node prevNode = null;

    for (int i = 0; i < n; i++) {
      int currVertex = sequence[i];
      indexOfAppearance[currVertex] = i;

      int nodeLevel = nodes[currVertex].level;

      // If the sequence doesn't start at Vertex 1
      if (i == 0 && currVertex != 0) {
        return false;
      }

      // If the difference between level before and current level is
      // greater than 1, then it's not valid already
      if (Math.abs(currLevel - nodeLevel) > 1) {
        // System.out.println("First: " + currVertex+ " " + nodeLevel);
        return false;
      }

      // It's not valid if we've already visited this level before
      // and we're not at that level anymore
      if (nodeLevel != currLevel && hasVisitedLevel[nodeLevel]) {
        // System.out.println("Second: " + currVertex + " " + nodeLevel);
        return false;
      }

      // If prev and curr nodes are same level but diff parent,
      // not valid if parents came in wrong order
      if (prevNode != null) {
        if (currLevel == nodeLevel) {
          int prevParent = prevNode.parent;
          int currParent = nodes[currVertex].parent;

          if (indexOfAppearance[prevParent] > indexOfAppearance[currParent]) {
            return false;
          }
        }
      }

      currLevel = nodeLevel;
      hasVisitedLevel[currLevel] = true;
      prevNode = nodes[currVertex];
    }

    return true;
  }

  static class Node {
    public int number, level, parent;

    public Node(int n, int l, int p) {
      number = n;
      level = l;
      parent = p;
    }

    @Override
    public String toString() {
      return String.format("%d, Level %d, Parent %d", number, level, parent);
    }
  }
}