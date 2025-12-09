#ifndef BOOKSET_H
#define BOOKSET_H

#include "Book.h"

// Inherits from Book, NOT PrintedMedia
class BookSet : public Book {
private:
    int volume;

public:
    // Constructor: Needs Title, Price, Author, ISBN, Volume
    BookSet(std::string t, double p, std::string a, std::string i, int v);

    void printDetails() override;
};

#endif