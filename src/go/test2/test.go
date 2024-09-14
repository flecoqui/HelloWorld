package main

import (
    "bufio"
    "fmt"
    "os"
)

func main() {

    for {
    reader := bufio.NewReader(os.Stdin)
    key, _ := reader.ReadString('\n')
    fmt.Printf("Input Char Is : %v", string(key))
    }
}