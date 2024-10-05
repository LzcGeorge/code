package main

import (
	"fmt"
)

type MyInt int
type Myfloat float64

type I interface {
	M()
}

func (v *MyInt) M() {
	fmt.Println("Im int")
}

func (v *Myfloat) M() {
	fmt.Println("Im float")
}

func main() {
	var i I
	
	i = new MyInt()
	i.M()
	
	i = new Myfloat(0.0)
	i.M()
}