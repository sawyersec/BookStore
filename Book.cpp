#include "Book.h"
#include <iostream>

// Constructor passes title/price up to PrintedMedia
Book::Book(std::string t, double p, std::string a, std::string i) 
    : PrintedMedia(t, p), author(a), isbn(i) {}

void Book::printDetails() {
    std::cout << "Type: BOOK" << std::endl;
    std::cout << "Title: " << title << " | Price: $" << price << std::endl;
    std::cout << "Author: " << author << " | ISBN: " << isbn << std::endl;
    std::cout << "-----------------------------" << std::endl;
}