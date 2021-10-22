// https://codeforces.com/problemset/problem/1600/E
package main

import (
	"fmt"
	"log"
)

func main() {
	var lengthOfArray, element int
	var choice string

	inputArray := make([]int, 0)
	newSequence := make([]int, 0)

	// taking the input array's length
	fmt.Scanln(&lengthOfArray)

	// taking the input array
	for i := 0; i < lengthOfArray; i++ {
		fmt.Scanln(&element)
		inputArray = append(inputArray, element)
	}

	count := lengthOfArray

	// participants list and if the
	participants := []string{"Alice", "Bob"}

	var currentPlayer, winner string

	start, end := 0, lengthOfArray-1

gameLoop:
	for i := start; i < end; i++ {
		k := 0
		for _, val := range participants {
			if count == 0 {
				winner = currentPlayer
				break gameLoop
			}
			currentPlayer = val

		selectSideToRemove:
			fmt.Println("which number you want to remove : left OR right")
			fmt.Scanln(&choice)
			switch choice {
			case "left":
				if len(newSequence) == 0 {
					newSequence = append(newSequence, inputArray[start])

				} else {
					if newSequence[k] < inputArray[start] {
						newSequence = append(newSequence, inputArray[start])
					}
					k = k + 1
					start = start + 1
				}

			case "right":
				if len(newSequence) == 0 {
					newSequence = append(newSequence, inputArray[end])

				} else {
					if newSequence[k] < inputArray[end] {
						newSequence = append(newSequence, inputArray[end])
					}
					k = k + 1
					end = end - 1
				}

			default:
				goto selectSideToRemove
			}

			// checking if all the elements are used then returning the winner
			if len(newSequence) == lengthOfArray {
				winner = val
				break gameLoop
			}
			lengthNewSeq := len(newSequence)

			//checking that last element of the new array is greater than both the side ending element
			// return the winner in that case
			if newSequence[lengthNewSeq-1] >= inputArray[start] && newSequence[lengthNewSeq-1] >= inputArray[end] {
				winner = currentPlayer
				count = 0
			} else {
				count = count - 1
			}

		}
	}

	log.Println(winner)

}
