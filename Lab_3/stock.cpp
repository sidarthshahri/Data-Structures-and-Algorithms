//
// Created by Sidarth Shahri on 3/21/17.
//

#include "stock.h"
#include <iomanip>

using namespace std;

stock::stock() {
    static const char alphanum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char randSymb[3];
    for (int i = 0; i < 3; ++i) {
        randSymb[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    string s(randSymb, 3);
    this->symbol = s;
    this->cost = (rand() / 99 + 1) / 10000 * 0.01;
    this->shares = rand() % 99 + 1;
}

ostream& operator<<(ostream& output, const stock RHS){
    output << "Symbol: " << RHS.symbol
           << "   Cost: $" << setw(5) << RHS.cost
           << "   Shares: " << RHS.shares;
    return output;
}