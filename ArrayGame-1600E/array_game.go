// https://codeforces.com/problemset/problem/1600/E
package main

import (
	"fmt"
)

func main() {
	var lengthOfArray, element int
	participants := []string{"Alice", "Bob"}
	inputArray := make([]int, 0)
	k := make(chan int, 1)

	fmt.Scanln(&lengthOfArray)
	for i := 0; i < lengthOfArray; i++ {
		fmt.Scan(&element)
		inputArray = append(inputArray, element)
	}
	go calcRightTurn(inputArray, k)
	go calcLeftTurn(inputArray, k)
	select {
	case x := <-k:
		if x%2 == 0 {
			fmt.Println(participants[0])
			return
		}
		fmt.Println(participants[1])
		return
	}
}
func calcRightTurn(inputArray []int, k chan int) {
	start, end := 0, len(inputArray)-1
	turn := 0
	for start < end && inputArray[end] < inputArray[end-1] {
		turn = turn + 1
		end = end - 1
	}
	k <- turn
	return
}
func calcLeftTurn(inputArray []int, k chan int) {
	start, end := 0, len(inputArray)-1
	turn := 0
	for start < end && inputArray[start] < inputArray[start+1] {
		turn = turn + 1
		end = end - 1
	}
	k <- turn
	return
}
