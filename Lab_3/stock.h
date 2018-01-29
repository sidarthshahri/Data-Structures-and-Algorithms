//
// Created by Sidarth Shahri on 3/21/17.
//

#ifndef LAB_3_STOCK_H
#define LAB_3_STOCK_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class stock {
public:
    stock();
    friend ostream& operator<<(ostream& output, const stock);

    string symbol;
private:
    double cost;
    int shares;
};


#endif //LAB_3_STOCK_H
