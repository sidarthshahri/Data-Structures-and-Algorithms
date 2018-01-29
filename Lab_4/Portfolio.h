//
// Created by Sidarth Shahri on 4/4/17.
//

#ifndef LAB_4_PORTFOLIO_H
#define LAB_4_PORTFOLIO_H

#include "node.h"

class Portfolio {
public:
    // Load: Reads in stocks from a text file and saves them as a linked list
    void load(string);

    // Store: Writes the linked list into a text file
    void store();

    // Print: Prints the list onto the console
    void print();

    // reversePrint: Prints the list onto the console in reverse order
    void reversePrint();

    // insertFront: Inserts a new element to the beginning of the linked list
    void insertFront(string s1, double d1, int i1);

    // insertBack: Inserts a new element to the end of the linked list
    void insertBack(string s1, double d1, int i1);

    // insertMiddle: Inserts a new element to the middle of the list
    void insertMiddle(string s1, double d1, int i1);

private:
    node* head;
    node* tail;
    node* helper;           // Used for iterating through the linked list
};


#endif //LAB_4_PORTFOLIO_H
