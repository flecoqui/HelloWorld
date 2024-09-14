package main
import (
	"bufio"
	"fmt"
	"os"
)
func main() {
	fmt.Println("Enter some text:")
	var input string

	// Read a single line of input
	_, err := fmt.Scan(&input)
	if err != nil {
		fmt.Println("Error:", err)
		return
	}

	fmt.Println("You entered:", input)
}