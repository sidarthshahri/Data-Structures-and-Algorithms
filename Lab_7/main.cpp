#include <iostream>
#include <fstream>
#include "Queue.h"
#include "Stack.h"

using namespace std;

int main() {
    // Variable Declarations
    ifstream infile;
    string holder;
    bool palindromeTest = false;
    char temp;
    int size;

    // Open file and check for error
    infile.open("palindrome.txt");
    if(infile.fail()) {
        cout << "File open failed!" << endl;
        exit(1);
    }

    // While loop to read from file until end of file
    while(!infile.eof()) {
        Queue arrayQueue;
        Stack arrayStack;
        getline(infile, holder);

        // Cut up input from file and store in array and queue
        for (int i = 0; i < holder.length(); i++) {
            if(isalpha(holder[i])) {
                arrayQueue.enqueue(holder[i]);
                arrayStack.push(holder[i]);
            }
        }

        // Compare stack.push with queue.push. If all equal, then phrase is a palindrome
        for (int i = 0; i < holder.length()/2; i++) {
            if (tolower(arrayStack.pop()) == tolower(arrayQueue.dequeue())) {
                palindromeTest = true;
            } else {
                palindromeTest = false;
                break;
            }
        }

        // Output results of comparison to console
        cout << holder << endl << palindromeTest << endl << endl;

        // Check for end of file
        if(infile.peek() == EOF)
            break;
    }

    // Close file
    infile.close();
}

