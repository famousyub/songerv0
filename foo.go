package main

import (
	"fmt"
	"os"
)

type Page struct {
	title string
	body  []byte
	//number int
}

func (p *Page) save() error {
	filename := p.title + ".txt"
	return os.WriteFile(filename, p.body, 0600)
}

func loadPage(title string) (*Page, error) {
	filename := title + ".txt"
	body, err := os.ReadFile(filename)
	if err != nil {
		return nil, err
	}
	return &Page{title: title, body: body}, nil
}

func mainTest() {
	fmt.Printf("Hello  world")
}
