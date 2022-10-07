//https://codeforces.com/contest/1734/problem/A

import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner br = new Scanner(System.in);
        int n = br.nextInt();
        for (int i = 0; i < n; i++) {
            int count = br.nextInt();
            int[] arr = new int[count];

            for (int j = 0; j < count; j++) {
                int temp = br.nextInt();
                arr[j] = temp;
            }
            Arrays.sort(arr);
            int ans = Integer.MAX_VALUE;
            for (int j = 2; j < count; j++) {
                ans = Math.min(ans, arr[j] - arr[j - 2]);
            }
            System.out.println(ans);
        }
    }
}
