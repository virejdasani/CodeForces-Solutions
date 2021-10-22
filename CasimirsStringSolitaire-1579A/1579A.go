// https://codeforces.com/problemset/problem/1579/A

package main

import "fmt"

func main() {
	var lengthOfArray int
	var element string

	inputArray := make([]string, 0)

	// taking the input array's length
	fmt.Scanln(&lengthOfArray)

	// taking the input array
	for i := 0; i < lengthOfArray; i++ {
		fmt.Scanln(&element)
		inputArray = append(inputArray, element)
	}

	for _, ele := range inputArray {
		checkValidity(ele)
	}

}

func checkValidity(ele string) {

	chars := make(map[rune]int)
	for _, char := range ele {
		chars[char] = chars[char] + 1
	}

	if (chars['A'] + chars['C']) == chars['B'] {
		fmt.Println("YES")
		return
	}

	fmt.Println("NO")
}

