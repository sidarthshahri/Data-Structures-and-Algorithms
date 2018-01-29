#include <iostream>
#include "arrayStack.h"
#include "InfixToPostfix.h"
using namespace std;

int main() {
    InfixToPostfix test1, test2, test3, test4, test5;
    cout << endl << "#1" << endl;
    test1.getInfix("A + B - C");
    cout << "Infix: ";
    test1.showInfix();
    test1.convertToPostfix();
    cout << "Postfix: ";
    test1.showPostfix();

    cout << endl << "#2" << endl;
    test2.getInfix("(A + B ) * C");
    cout << "Infix: ";
    test2.showInfix();
    test2.convertToPostfix();
    cout << "Postfix: ";
    test2.showPostfix();

    cout << endl << "#3" << endl;
    test3.getInfix("(A + B) * (C - D)");
    cout << "Infix: ";
    test3.showInfix();
    test3.convertToPostfix();
    cout << "Postfix: ";
    test3.showPostfix();

    cout << endl << "#4" << endl;
    test4.getInfix("A + ((B + C) * (E - F) - G) / (H - I)");
    cout << "Infix: ";
    test4.showInfix();
    test4.convertToPostfix();
    cout << "Postfix: ";
    test4.showPostfix();

    cout << endl << "#5" << endl;
    test5.getInfix("A + B * (C + D ) - E / F * G + H");
    cout << "Infix: ";
    test5.showInfix();
    test5.convertToPostfix();
    cout << "Postfix: ";
    test5.showPostfix();

    return 0;
}