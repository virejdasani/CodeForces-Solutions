// https://codeforces.com/contest/1420/problem/B

import java.util.Scanner;

public class Rock_and_Lever {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0){
            int n = sc.nextInt();

            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }

            System.out.println(countPair(arr));
        }
    }

    private static long countPair(int[] arr){
        boolean[] visited = new boolean[arr.length];
        long res = 0;

        for (int i = 31; i >= 0 ; i--) {
            long count = 0;
            for (int j = 0; j < arr.length; j++) {
                if((arr[j] & (1<<i)) != 0 && !visited[j]){
                    count++;
                    visited[j] = true;
                }
            }

            res += (count * (count-1))/2;
        }

        return res;
    }
}
