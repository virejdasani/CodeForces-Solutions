//https://codeforces.com/contest/1/problem/A

import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner br = new Scanner(System.in);
        long a = br.nextInt();
        long b = br.nextInt();
        long c = br.nextInt();
        System.out.println((((a+c-1)/c)*((b+c-1)/c)));
    }
}