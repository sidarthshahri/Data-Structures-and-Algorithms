//
// Created by Sidarth Shahri on 4/18/17.
//

#ifndef LAB_6_INFIXTOPOSTFIX_H
#define LAB_6_INFIXTOPOSTFIX_H

#include <string>
#include "arrayStack.h"

using namespace std;

class InfixToPostfix {
public:
    InfixToPostfix();
    void getInfix(string);
    void showInfix();
    void showPostfix();
    void convertToPostfix();
    int precedence(char);
private:
    string infix;
    string postfix;
    char symbol;
    arrayStack helper;
};


#endif //LAB_6_INFIXTOPOSTFIX_H
