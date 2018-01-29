//
// Created by Sidarth Shahri on 2/28/17.
//

#include "Purchase.h"
void Purchase::setCustomer(int num) {
    this->customer = num;
}

void Purchase::setItem(string s1) {
    this->item = s1;
}

int Purchase::getCustomer() {
    return this->customer;
}

string Purchase::getItem() {
    return this->item;
}

bool Purchase::operator<(const Purchase p1) {
    char comp1, comp2;
    if(this->customer <= p1.customer)
        return true;
    else if(this->customer == p1.customer) {
        int parser = 0;
        comp1 = this->item[parser];
        comp2 = p1.item[parser];
        while (comp1 == comp2) {
            parser++;
            comp1 = this->item[parser];
            comp2 = p1.item[parser];
        }
        if (comp1 < comp2) {
            return true;
        }
    } else
        return false;
}