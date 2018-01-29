#include <iostream>
#include "intStack.h"

/* Directions:
 * 1) Create an array of 10 stacks
 * 2) Create an array of integers
 * 3) Make a for loop that loops 3 times
 *      - 1st iteration: look at 1's place and push to appropriate stack
 *      for s[0] to s[9] pop values back into array
 *      - 2nd iteration: repeat with 10's place
 *      - 3rd iteration: repeat with 100's place
 *
 * Answer Questions:
 * 1) What did I just make you do?
 * 2) How is this algorithm different? (Only works if you used an array of queues)
 * 3) Can you solve this using a queue?
 * 4) What is the complexity?
 */

using namespace std;

void printArray(int intArray[]);

const int size = 10;

int main() {
    // Variable Declarations
    int modOperand = 10;
    int index;
    int divisor = 1;
    int modResult = 0;
    int divisionResult = 0;
    intStack stackArray[10];
    int intArray[size] = {2, 13, 5, 44, 56, 66, 101, 317, 655, 712};

    // Array Before Algorithm
    cout << "Before: ";
    printArray(intArray);

    // Algorithm
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < size; j++) {
            modResult = intArray[j] % modOperand;
            divisionResult = modResult / divisor;
            stackArray[divisionResult].push(intArray[j]);
        }
        index = 0;
        if(i % 2 == 0) {
            for (int j = 0; j < 10; j++) {
                while (!stackArray[j].isEmpty()) {
                    intArray[index] = stackArray[j].pop();
                    index++;
                }
            }
        } else {
            for (int j = 9; j >= 0; j--) {
                while (!stackArray[j].isEmpty()) {
                    intArray[index] = stackArray[j].pop();
                    index++;
                }
            }
        }
        cout << i+1 << ") ";
        printArray(intArray);
        modOperand *= 10;
        divisor *= 10;
    }

    // Array After Algorithm
    cout << "After: ";
    printArray(intArray);

    return 0;
}

// Print Array
void printArray(int intArray[]) {
    for (int i = 0; i < size; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;
}

/* Answers to Questions:
 * 1) The algorithm should sort the array in ascending order.
 * 3) A queue can be used to sort the array just as a stack can. If using a queue, the same algorithm can apply. If using a stack, the algorithm should pop from the stack array starting with the first stack all the way until the tenth stack in the first iteration. In the second iteration, the algorithm should pop from the stack array starting with the tenth stack all the way until the first stack. In the third iteration, the algorithm should pop from the stack array like in the first iteration.
 * 4) The complexity of this algorithm is O(m*n) where m and n are the number of iterations in the outer loop and inner loop respectively.
 */