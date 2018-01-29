//
// Created by Sidarth Shahri on 5/9/17.
//

#ifndef LAB_EXAM_3_INTSTACK_H
#define LAB_EXAM_3_INTSTACK_H

#include <iostream>

class intStack {
public:
    intStack(int = 100);
    ~intStack();
    void push(int);
    int pop();
    bool isEmpty();
    int getTop();
private:
    int size;
    int top;
    int* list;
};


#endif //LAB_EXAM_3_INTSTACK_H
