//
// Created by Sidarth Shahri on 4/16/17.
//

#ifndef LAB_6_ARRAYSTACK_H
#define LAB_6_ARRAYSTACK_H


class arrayStack {
public:
    arrayStack(int=100);
    ~arrayStack();
    void push(char);
    char pop();
    bool isEmpty();
    char getTop();
private:
    int size;
    int top;
    char* list;
};


#endif //LAB_6_ARRAYSTACK_H
