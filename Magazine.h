#ifndef MAGAZINE_H
#define MAGAZINE_H

#include "PrintedMedia.h"
#include <string>

class Magazine : public PrintedMedia {
private:
    std::string month;
    int issueNum;

public:
    Magazine(std::string title, double price, std::string month, int issueNum);
    void printDetails() override;
};

#endif