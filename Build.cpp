#include "algoLib.hpp"

Build::Build(void) {
    int i = -1;
    while (++i <= 52) {
        deck1[i] = 0;
        deck2[i] = 0;
    }
}

Build::~Build(void) {
    std::cout << "End of program..." << std::endl;
}

bool Build::setValueInDeck(void) {
    std::cout << "Give 26 card for first deck (1rst is top of stack):" << std::endl;
    int count = 1;
    std::string outUser;
    while (count < 27) {
        std::cout << count << " : ";
        std::cin >> outUser;
        // Parsing on "outUser" here
        deck1[count - 1] = std::stoi(outUser);
        count++;
    }
    count = 1;
    std::cout << "Give 26 card for second deck (1rst is top of stack):" << std::endl;
    while (count < 27) {
        std::cout << count << " : ";
        std::cin >> outUser;
        // Parsing on "outUser" here
        deck2[count - 1] = std::stoi(outUser);
        std::cout << std::stoi(outUser) << std::endl;
        count++;
    }
    return (true);
}

void    Build::setCard(int card1, int card2, int isd1ord2) {
    ;
}