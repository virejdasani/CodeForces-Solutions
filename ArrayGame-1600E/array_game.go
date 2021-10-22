// https://codeforces.com/problemset/problem/1600/E
package main

import (
	"fmt"
	"log"
)

func main() {
	var lengthOfArray, element int
	var winner string
	start, end := 0, lengthOfArray-1
	// participants list and if the
	participants := []string{"Alice", "Bob"}
	inputArray := make([]int, 0)
	newSequence := make([]int, 0)

	// taking the input array's length
	fmt.Scanln(&lengthOfArray)
	// taking the input array
	for i := 0; i < lengthOfArray; i++ {
		fmt.Scan(&element)
		inputArray = append(inputArray, element)
	}

gameLoop:
	for i := start; i < lengthOfArray; i++ {
		k := 0
		if inputArray[start] > inputArray[end] {
			if len(newSequence) == 0 {
				newSequence = append(newSequence, inputArray[start])
			} else {
				if newSequence[k] < inputArray[start] {
					newSequence = append(newSequence, inputArray[start])
				}
				k = k + 1
			}
			start = start + 1
		} else {
			if len(newSequence) == 0 {
				newSequence = append(newSequence, inputArray[end])
			} else {
				if newSequence[k] < inputArray[end] {
					newSequence = append(newSequence, inputArray[end])
				}
				k = k + 1
			}
			end = end - 1
		}
		lengthNewSeq := len(newSequence)
		// checking if all the elements are used then returning the winner
		if lengthNewSeq == lengthOfArray {
			winner = participants[i%2]
			break gameLoop
		}

		//checking that last element of the new array is greater than both the side ending element
		// return the winner in that case
		if newSequence[lengthNewSeq-1] >= inputArray[start] && newSequence[lengthNewSeq-1] >= inputArray[end] {
			winner = participants[i%2]
			break gameLoop
		}
	}
	log.Println(winner)
}
