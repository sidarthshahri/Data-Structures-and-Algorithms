//
// Created by Sidarth Shahri on 4/18/17.
//

#include "InfixToPostfix.h"
#include <iostream>

using namespace std;

InfixToPostfix::InfixToPostfix() {
    infix = "";
    postfix = "";
}

void InfixToPostfix::getInfix(string input) {
    infix = input;
}

void InfixToPostfix::showInfix() {
    cout << infix << endl;
}

void InfixToPostfix::showPostfix() {
    cout << postfix << endl;
}

void InfixToPostfix::convertToPostfix() {
    for(int i = 0; i < infix.length(); i++) {
        symbol = infix[i];
        if(isalpha(symbol)) {                   // If symbol is an operand, append symbol to postfix
            postfix = postfix + symbol;
        } else if(symbol == '(') {              // If symbol is (, push symbol into the stack helper
            helper.push(symbol);
        } else if(symbol == ')') {              // If symbol is ), pop and append all symbols from stack until (. Discard (
            char temp = helper.pop();
            while(temp != '(') {
                postfix = postfix + temp;
                temp = helper.pop();
            }
        } else if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '^') {           // If symbol is an operator
            while(!helper.isEmpty() && helper.getTop() != '(' && (precedence(helper.getTop()) <= precedence(symbol))) {
                char temp = helper.pop();
                postfix = postfix + temp;
            }
            helper.push(symbol);
        }
    }
    while(!helper.isEmpty()) {
        postfix = postfix + helper.pop();
    }
}

int InfixToPostfix::precedence(char a) {
    int temp;
    if(a == '^')
        temp = 1;
    else if(a == '*' || a == '/')
        temp = 2;
    else if(a == '+' || a == '-')
        temp = 3;
    return temp;
}