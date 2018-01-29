#include <iostream>

using namespace std;
#import "Portfolio.h"
#import "Stock.h"
#import "node.h"

int main() {
    Portfolio Sidarth;
    string fileName = "stock.txt";
    cout << "Creating linked list from stock.txt..." << endl << endl;
    Sidarth.load(fileName);

    cout << "Outputting linked list to output.txt..." << endl << endl;
    Sidarth.store();

    cout << "Printing linked list to console..." << endl;
    Sidarth.print();
    cout << endl;

    cout << "Printing linked list to console in reverse..." << endl;
    Sidarth.reversePrint();
    cout << endl;

    cout << "Adding a node to the front of the linked list..." << endl << endl;
    Sidarth.insertFront("FRNT", 10.01, 25);

    cout << "Adding a node to the back of the linked list..." << endl << endl;
    Sidarth.insertBack("BACK", 20.02, 50);

    cout << "Adding a node to the middle of the linked list..." << endl << endl;
    Sidarth.insertMiddle("MDDL", 30.03, 75);

    cout << "Printing out new linked list with added nodes..." << endl;
    Sidarth.print();
    cout << endl;

    cout << "Printing out new linked list with added nodes reversed..." << endl;
    Sidarth.reversePrint();
    cout << endl;


    Portfolio Sidarth2;
    string fileName2 = "stock2.txt";
    cout << "Creating linked list from stock.txt..." << endl << endl;
    Sidarth.load(fileName2);

    cout << "Outputting linked list to output.txt..." << endl << endl;
    Sidarth.store();

    cout << "Printing linked list to console..." << endl;
    Sidarth.print();
    cout << endl;

    cout << "Printing linked list to console in reverse..." << endl;
    Sidarth.reversePrint();
    cout << endl;

    cout << "Adding a node to the front of the linked list..." << endl << endl;
    Sidarth.insertFront("FRNT", 10.01, 25);

    cout << "Adding a node to the back of the linked list..." << endl << endl;
    Sidarth.insertBack("BACK", 20.02, 50);

    cout << "Adding a node to the middle of the linked list..." << endl << endl;
    Sidarth.insertMiddle("MDDL", 30.03, 75);

    cout << "Printing out new linked list with added nodes..." << endl;
    Sidarth.print();
    cout << endl;

    cout << "Printing out new linked list with added nodes reversed..." << endl;
    Sidarth.reversePrint();
    cout << endl;

    cout << "Program complete..." << endl;

    return 0;
}