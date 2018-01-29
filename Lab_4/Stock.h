//
// Created by Sidarth Shahri on 4/4/17.
//

#ifndef LAB_4_STOCK_H
#define LAB_4_STOCK_H


#include <string>
#include <iostream>

using namespace std;

class Stock {
public:
    Stock();
    friend ostream& operator<<(ostream& output, const Stock);

//private:
    string symbol;
    double cost;
    int shares;
};


#endif //LAB_4_STOCK_H
