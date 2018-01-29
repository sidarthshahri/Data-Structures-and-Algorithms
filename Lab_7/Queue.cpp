//
// Created by Sidarth Shahri on 4/25/17.
//

#include "Queue.h"

Queue::Queue(int input) {
    size = input;
    front = 0;
    rear = 0;
    list = new char[100];
}

Queue::~Queue() {
    delete list;
}

void Queue::enqueue(char input) {
    if(isfull()) {
        cout << "Queue is full!" << endl;
    } else {
        list[rear++] = input;
    }
}

char Queue::dequeue() {
    if (isempty()) {
        cout << "Queue is empty!" << endl;
    } else {
        return list[front++];
    }
}

char Queue::peek() {
    return list[front];
}

bool Queue::isfull() {
    if(rear+1 >= size)
        return true;
    else
        return false;
}

bool Queue::isempty() {
    if(front == rear || rear < front)
        return true;
    else
        return false;
}