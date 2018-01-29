//
// Created by Sidarth Shahri on 4/4/17.
//


#include "Portfolio.h"
#include <fstream>
#include <sstream>

// Load: Reads in stocks from a text file and saves them as a linked list
void Portfolio::load(string fileName) {
    ifstream inFile;
    string holder;
    inFile.open(fileName);
    if(inFile.fail()) {
        cout << "File open failed." << endl;
        exit(1);
    }

    // Initial conditions for linked list
    head = NULL;
    tail = NULL;

    // Create a new node and populate with data until end of file
    while(!inFile.eof()) {
        node* newNode = new node;
        newNode->next = NULL;
        newNode->prev = NULL;

        // Populate newNode
        stringstream ss;
        getline(inFile, holder);
        ss << holder;
        ss >> newNode->data.symbol >> newNode->data.cost >> newNode->data.shares;
//        ss.str(" ");
//        ss.clear();

        // Attach newNode to linked list
        if(head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    inFile.close();
}

// Store: Writes the linked list into a text file
void Portfolio::store() {
    ofstream outFile;
    outFile.open("output.txt");
    if(outFile.fail()) {
        cout << "File open failed." << endl;
        exit(1);
    }

    helper = head;
    while(helper != NULL) {
        outFile << helper->data << endl;
        helper = helper->next;
    }
    outFile.close();
}

// Print: Prints the list onto the console
void Portfolio::print() {
    helper = head;
    while(helper != NULL) {
        cout << helper->data << endl;
        helper = helper->next;
    }
}

// reversePrint: Prints the list onto the console in reverse order
void Portfolio::reversePrint() {
    helper = tail;
    while(helper != NULL) {
        cout << helper->data << endl;
        helper = helper->prev;
    }
}

// insertFront: Inserts a new element to the beginning of the linked list
void Portfolio::insertFront(string s1, double d1, int i1) {
    node* newNode = new node;

    // Populate with data
    newNode->data.symbol = s1;
    newNode->data.cost = d1;
    newNode->data.shares = i1;

    // Attach to front of linked list
    newNode->next = head;
    newNode->prev = NULL;
    head->prev = newNode;
    head = newNode;
}

// insertBack: Inserts a new element to the end of the linked list
void Portfolio::insertBack(string s1, double d1, int i1) {
    node* newNode = new node;

    // Populate with data
    newNode->data.symbol = s1;
    newNode->data.cost = d1;
    newNode->data.shares = i1;

    // Attach to back of linked list
    newNode->prev = tail;
    newNode->next = NULL;
    tail->next = newNode;
    tail = newNode;
}

// insertMiddle: Inserts a new element to the middle of the list
void Portfolio::insertMiddle(string s1, double d1, int i1) {
    node* newNode = new node;

    // Populate with data
    newNode->data.symbol = s1;
    newNode->data.cost = d1;
    newNode->data.shares = i1;

    // Find size of list
    int size = 0;
    node* helper = head;
    while(helper != NULL) {
        size++;
        helper = helper->next;
    }

    // Find middle of list
    node* middle = head;
    for(int i = 0; i < size/2 - 1; i++) {
        middle = middle->next;
    }

    // Add newNode to middle
    newNode->prev = middle;
    newNode->next = middle->next;
    middle->next->prev = newNode;
    middle->next = newNode;
}

