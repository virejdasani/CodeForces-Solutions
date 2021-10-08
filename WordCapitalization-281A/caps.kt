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

import java.util.Scanner

@ExperimentalStdlibApi
fun main() {
    val scanner = Scanner(System.`in`)
    val strInput = scanner.nextLine()
    scanner.close()

    print(strInput.replaceFirstChar { it.uppercase() })
}

