//
// Created by Sidarth Shahri on 4/4/17.
//

#include "Stock.h"
#include <iomanip>

using namespace std;

Stock::Stock() {
    symbol = " ";
    cost = 0.0;
    shares = 0;
}

ostream& operator<<(ostream& output, const Stock RHS){
    output << "Symbol: " << setw(4) << RHS.symbol
           << "   Cost: $" << setw(7) << RHS.cost
           << "   Shares: " << setw(4) << RHS.shares;
    return output;
}