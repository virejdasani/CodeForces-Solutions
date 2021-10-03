// https://codeforces.com/contest/616/problem/D
import java.util.*;
import java.io.*;

public class CF616D {
  static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
  static BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
  static int[] arr;
  static int n, k;

  public static void main(String[] args) throws IOException {
    String[] first = br.readLine().split(" ");
    n = Integer.parseInt(first[0]);
    k = Integer.parseInt(first[1]);
    TreeMap<Integer, Integer> tree = new TreeMap<>();

    first = br.readLine().split(" ");
    arr = new int[n];
    for (int i = 0; i < first.length; i++) {
      arr[i] = Integer.parseInt(first[i]);
    }

    int left = 0;
    int right = 1;

    int leftPointer = 0;
    int rightPointer = 0;

    while (tree.size() < k && rightPointer < n) {
      if (!tree.containsKey(arr[rightPointer])) {
        tree.put(arr[rightPointer++], 1);
      } else {
        int count = tree.get(arr[rightPointer]) + 1;
        tree.replace(arr[rightPointer++], count);
      }

      right = rightPointer;
    }

    while (rightPointer < n && leftPointer < n) {
      if (tree.containsKey(arr[rightPointer])) {
        int count = tree.get(arr[rightPointer]) + 1;
        tree.replace(arr[rightPointer++], count);
      } else {
        tree.put(arr[rightPointer++], 1);
        while (true) {
          int count = tree.get(arr[leftPointer]) - 1;
          if (count == 0) {
            tree.remove(arr[leftPointer++]);
            break;
          } else {
            tree.put(arr[leftPointer++], count);
          }
        }
      }

      if (right - left <= rightPointer - leftPointer) {
        left = leftPointer;
        right = rightPointer;
      }
    }

    System.out.println((left + 1) + " " + (right));

  }
}