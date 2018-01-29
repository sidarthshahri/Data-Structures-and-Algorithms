//
// Created by Sidarth Shahri on 4/25/17.
//

#ifndef LAB_7_STACK_H
#define LAB_7_STACK_H

#include <iostream>

using namespace std;

class Stack {
public:
    Stack(int=100);
    ~Stack();
    void push(char);
    char pop();
    bool isEmpty();
    char getTop();
private:
    int size;
    int top;
    char* list;
};


#endif //LAB_7_STACK_H
