#ifndef PRINTEDMEDIA_H
#define PRINTEDMEDIA_H

#include <string>
#include <iostream>

class PrintedMedia {
protected:
    std::string title;
    double price;

public:
    // Constructor
    PrintedMedia(std::string t, double p);

    // Virtual Destructor (Important for polymorphism)
    virtual ~PrintedMedia() {}

    // Pure Virtual Function
    virtual void printDetails() = 0;
};

#endif