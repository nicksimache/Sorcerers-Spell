#include <string>
#include <vector>
#include <map>

#include <iostream>

#include "LetterTile.h"

std::map<std::string, int> LetterTile::letterScores = {
    {"A", 1}, {"E", 1}, {"I", 1}, {"O", 1}, {"U", 1}, {"L", 1}, {"N", 1}, {"S", 1}, {"T", 1}, {"R", 1},
    {"D", 2}, {"G", 2},
    {"B", 3}, {"C", 3}, {"M", 3}, {"P", 3},
    {"F", 4}, {"H", 4}, {"V", 4}, {"W", 4}, {"Y", 4},
    {"K", 5},
    {"J", 8}, {"X", 8},
    {"Q", 10}, {"Z", 10}
};

LetterTile::LetterTile() : letter("A"), point(0), isLetterChosen(false) {}
LetterTile::LetterTile(std::string s) : letter(s), point(letterScores[s]), isLetterChosen(false) {}

std::string LetterTile::toString() {
    return letter;

}

void LetterTile::changeLetterChosen(bool b)
{
    std::cout << isLetterChosen << "\n";

    isLetterChosen = b;

    std::cout << isLetterChosen << "\n\n\n";


}

