#include "stock.h"

struct node {
    stock data;
    node* next;
};

int main() {
    srand(time(NULL));          // Seeding the random function with time

    // Create Linked List with 20 elements/nodes
    node* head = NULL;
    node* current = NULL;
    for(int i = 0; i < 20; i++) {
        node* newNode = new node;
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    // Print List
    cout << endl << "Printout of List:" << endl;
    node* cpy = head;
    for(int i = 0; i < 20; i++) {
        cout << i+1 << ") " << cpy->data << endl;
        cpy = cpy->next;
    }
    cout << endl;

    // Find size of List
    int size = 0;
    node* cpy2 = head;
    while(cpy2 != NULL) {
        size++;
        cpy2 = cpy2->next;
    }

    // Find Middle of List
    cout << "Middle of the Linked List: " << endl;
    int midNum = 0;
    node* middle = head;
    for(int j = 0; j < size/2 - 1; j++) {
        middle = middle->next;
        midNum++;
    }
    cout << middle->data << endl;
    cout << "Position of Middle Element: " << midNum << endl;

    // Splitting Linked List in Half
    node* head2 = middle;
    middle->next = NULL;


    return 0;
}

