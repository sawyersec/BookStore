#include "BookSet.h"
#include <iostream>

// TODO: Implement the Constructor
// CRITICAL HINT: You must call the BOOK constructor in your initialization list.
// Syntax: BookSet(...) : Book(t, p, a, i), volume(v) { }
BookSet::BookSet(std::string t, double p, std::string a, std::string i, int v)
    : Book(t, p, a, i), volume(v){}

void BookSet::printDetails() {
    std::cout << "Type: BOOK SET (Vol " << volume << ")" << std::endl;
    std::cout << "Title: " << title << " | Price: $" << price << std::endl;
    std::cout << "Author: " << author << " | ISBN: " << isbn << std::endl;
    std::cout << "-----------------------------" << std::endl;
}