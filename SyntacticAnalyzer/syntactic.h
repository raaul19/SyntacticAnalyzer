#ifndef SYNTACTIC_H
#define SYNTACTIC_H

#include <fstream>
#include "automatum.h"

#define TABLE_ROWS 84
#define TABLE_COLS 39
#define RULES_ROWS 43
#define RULES_COLS 2
#define TABLE_FILE "GR2slrTable.txt"
#define RULES_FILE "GR2slrRulesId.txt"

class Syntactic{
private:
    std::fstream tableFile;
    std::fstream rulesFile;
    int table[TABLE_ROWS][TABLE_COLS];
    int rules[TABLE_ROWS][TABLE_COLS];
public:
    Syntactic();
    ~Syntactic();
    void fillArrays();
    bool analyze(std::string);
};

#endif // SYNTACTIC_H
