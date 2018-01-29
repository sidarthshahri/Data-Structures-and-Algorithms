//
// Created by Sidarth Shahri on 4/25/17.
//

#include "Stack.h"

Stack::Stack(int input) {
    size = input;
    top = 0;
    list = new char[input];
}

Stack::~Stack() {
    delete list;
}

void Stack::push(char input) {
    if((top + 1) >= size) {
        cout << "Stack is full!" << endl;
    } else {
        top++;
        list[top] = input;
    }
}

char Stack::pop() {
    if((top - 1) <= -1) {
        cout << "Stack is empty!" << endl;
        return 0;
    } else {
        int returnValue = list[top];
        top--;
        return returnValue;
    }
}

bool Stack::isEmpty() {
    if(top == 0) {
        return true;
    } else
        return false;
}

char Stack::getTop() {
    return list[top];
}