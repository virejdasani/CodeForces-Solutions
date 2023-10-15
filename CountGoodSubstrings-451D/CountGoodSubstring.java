// https://codeforces.com/problemset/problem/451/D

public class CountGoodSubstrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();

        long a_odd = 0, a_even = 0;
        long b_odd = 0, b_even = 0;
        long odd = 0, even = 0;

        for (int i = 1; i <= s.length(); i++) {
            odd++;

            if(i%2 != 0){
                if(s.charAt(i-1)=='a'){
                    odd += a_odd;
                    a_odd++;

                    even += a_even;
                }
                else{
                    odd += b_odd;
                    b_odd++;

                    even += b_even;
                }
            }
            else{
                if(s.charAt(i-1)=='a'){
                    odd += a_even;
                    a_even++;

                    even += a_odd;
                }
                else{
                    odd += b_even;
                    b_even++;

                    even += b_odd;
                }
            }
        }

        System.out.println(even +" "+ odd);
    }
}
