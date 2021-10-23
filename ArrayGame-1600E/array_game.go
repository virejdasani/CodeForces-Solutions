// https://codeforces.com/problemset/problem/1600/E
package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
)

func main() {
	var lengthOfArray, element int
	participants := []string{"Alice", "Bob"}
	inputArray := make([]int, 0)
	scanner := bufio.NewScanner(os.Stdin)
	scanner.Split(bufio.ScanWords)
	scanner.Scan()
	lengthOfArray, _ = strconv.Atoi(scanner.Text())
	for i := 0; i < lengthOfArray; i++ {
		scanner.Scan()
		element, _ = strconv.Atoi(scanner.Text())
		inputArray = append(inputArray, element)
	}

	k1 := calcRightTurn(inputArray)
	k2 := calcLeftTurn(inputArray)

	if k1%2 == 0 || k2%2 == 0 {
		fmt.Println(participants[0])
		return
	}
	fmt.Println(participants[1])
	return

}
func calcRightTurn(inputArray []int) (turn int) {
	start, end := 0, len(inputArray)-1
	turn = 0
	for start < end && inputArray[end] < inputArray[end-1] {
		turn = turn + 1
		end = end - 1
	}
	return
}
func calcLeftTurn(inputArray []int) (turn int) {
	start, end := 0, len(inputArray)-1
	turn = 0
	for start < end && inputArray[start] < inputArray[start+1] {
		turn = turn + 1
		end = end - 1
	}
	return
}
