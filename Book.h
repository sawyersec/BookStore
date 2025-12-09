#ifndef BOOK_H
#define BOOK_H

#include "PrintedMedia.h"
#include <string>

class Book : public PrintedMedia {
protected:
    // Defined as protected so BookSet can access them if needed
    std::string author;
    std::string isbn;

public:
    Book(std::string title, double price, std::string author, std::string isbn);
    void printDetails() override;
};

#endif