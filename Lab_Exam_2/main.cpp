#include <iostream>
#include "simple.h"

using namespace std;

struct simpleNode {
    simple data;
    simpleNode* next;
};

void printList(simpleNode*);

int main() {
    // Helper variables
    simpleNode* helper = NULL;
    int tempNumber;
    char tempLetter;

    // File A
    ifstream infileA;
    infileA.open("FileA.txt");
    if(infileA.fail()) {
        cout << "File open failed..." << endl;
        exit(1);
    }

    // Creating Linked List 1
    simpleNode* headA = NULL;
    while(!infileA.eof()) {
        simpleNode* newNode = new simpleNode;
        newNode->next = NULL;
        infileA >> tempNumber >> tempLetter;
        newNode->data.setNumber(tempNumber);
        newNode->data.setLetter(tempLetter);
        if(headA == NULL) {
            headA = newNode;
            helper = newNode;
        } else {
            helper->next = newNode;
            helper = newNode;
        }
        if(infileA.peek() == EOF)
            break;
    }
    infileA.close();

    // File B
    ifstream infileB;
    infileB.open("fileB.txt");
    if(infileB.fail()) {
        cout << "File open failed..." << endl;
        exit(1);
    }

    // Creating Linked List 2
    simpleNode* headB = NULL;
    while(!infileB.eof()) {
        simpleNode* newNode = new simpleNode;
        newNode->next = NULL;
        infileB >> tempNumber >> tempLetter;
        newNode->data.setNumber(tempNumber);
        newNode->data.setLetter(tempLetter);
        if(headB == NULL) {
            headB = newNode;
            helper = newNode;
        } else {
            helper->next = newNode;
            helper = newNode;
        }
        if(infileB.peek() == EOF)
            break;
    }
    infileB.close();

    // Print Linked Lists
    cout << endl << "Linked List from File A" << endl;
    printList(headA);
    cout << endl << "Linked List from File B" << endl;
    printList(headB);

//    // Merge Lists
//    helper = headA;
//    while(helper->next != NULL) {
//        helper = helper->next;
//    }
//    helper->next = headB;
//    headB = NULL;
//
//    // Print Merged Linked List
//    cout << endl << "Merged Linked Lists" << endl;
//    printList(headA);

    // Bonus (NOTE: If the below bonus section works correctly, can I get credit for Lab 2?)
    simpleNode* helperA = new simpleNode;
    simpleNode* helperB = new simpleNode;
    simpleNode* temp = new simpleNode;
    helperA = headA;
    helperB = headB;
    while((helperA != NULL) & (helperB != NULL)) {
        temp = helperA->next;
        helperA->next = helperB;
        helperA = temp;
        temp = helperB->next;
        helperB->next = helperA;
        helperB = temp;

    }
    headB = NULL;

    // Printing Ordered Merged List
    cout << endl << "Ordered Merged Linked List" << endl;
    printList(headA);

    return 0;
}

void printList(simpleNode* start) {
    cout << "H->";
    while(start != NULL) {
        cout << start->data << "->";
        start = start->next;
    }
    cout << "N" << endl;
}