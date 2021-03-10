import java.util.Scanner;

/**
 * caps
 */
public class caps {
    public static void main(String[] args) {
        // Take input
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        scanner.close();

        // Capitalize first letter
        input = input.substring(0, 1).toUpperCase() + input.substring(1);

        System.out.println(input);
    }
}



// https://codeforces.com/problemset/problem/281/A

// Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

// Note, that during capitalization all the letters except the first one remains unchanged.

// Input
// A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

// Output
// Output the given word after capitalization.

// Examples
// inputCopy
// ApPLe
// outputCopy
// ApPLe
// inputCopy
// konjac
// outputCopy
// Konjac