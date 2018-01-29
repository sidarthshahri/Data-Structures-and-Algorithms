//
// Created by Sidarth Shahri on 4/25/17.
//

#ifndef LAB_7_QUEUE_H
#define LAB_7_QUEUE_H

#include <iostream>

using namespace std;

class Queue {
public:
    Queue(int = 100);
    ~Queue();
    void enqueue(char);
    char dequeue();
    char peek();
    bool isfull();
    bool isempty();
private:
    int size, front, rear;
    char* list;
};


#endif //LAB_7_QUEUE_H
