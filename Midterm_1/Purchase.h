//
// Created by Sidarth Shahri on 2/28/17.
//

#ifndef MIDTERM_1_PURCHASE_H
#define MIDTERM_1_PURCHASE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

class Purchase {
public:
    /* Default constructor created by compiler is good enough for this program. No need to initialize Purchase object
     * with anything other than 0
     */

    // Setters to store values into member variables. Necessary because member variables are private
    // Used in populating a dynamic array with information from text files
    void setCustomer(int);
    void setItem(string);

    // Getters to return values from member variables. Necessary because member variables are private.
    // Used in printing to the console
    int getCustomer();
    string getItem();

    // Overloading < operator for use in sorting
    bool operator<(const Purchase);

private:
    string item;
    int customer;
};


#endif //MIDTERM_1_PURCHASE_H
