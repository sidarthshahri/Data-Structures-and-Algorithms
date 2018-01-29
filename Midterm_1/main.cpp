/* IDE Used: CLion by JetBrains.
 * Name: Sidarth Shahri
 * SID: 009712248
 */

#include "Purchase.h"
void selectSort(Purchase*, int);
void populateArray(ifstream&, Purchase*, int);
void fileErrorCheck(ifstream&);

const int size = 15;

int main() {
     // Variable and Object Declarations
    Purchase* purchaseArray;
    purchaseArray = new Purchase[15];
    stringstream ss;
    ifstream inFile;

    // File 1
    inFile.open("day1.txt");
    fileErrorCheck(inFile);                         // Check if the file opened correctly
    populateArray(inFile, purchaseArray, 0);
    inFile.close();

    // File 2
    inFile.open("day2.txt");
    fileErrorCheck(inFile);                         // Check if the file opened correctly
    populateArray(inFile, purchaseArray, 6);
    inFile.close();

    // File 3
    inFile.open("day3.txt");
    fileErrorCheck(inFile);                         // Check if the file opened correctly
    populateArray(inFile, purchaseArray, 10);
    inFile.close();

    // Sort array
    selectSort(purchaseArray, size);

    for(int i = 0; i < size-1; i++) {
        cout << "Customer: " << purchaseArray[i].getCustomer() << ", Item: " << purchaseArray[i].getItem() << endl;
    }

    // Finish and clean up
    delete [] purchaseArray;
    return 0;
}

void selectSort(Purchase purchaseArray[], int size) {
    int pos_min;
    Purchase temp;
    for(int i = 0; i < size - 1; i++) {
        pos_min = i;
        for(int j = i+1; j < size; j++) {
            if(purchaseArray[j] < purchaseArray[pos_min])
                pos_min = j;
        }
        if(pos_min != i) {
            temp = purchaseArray[i];
            purchaseArray[i] = purchaseArray[pos_min];
            purchaseArray[pos_min] = temp;
        }
    }
}

void populateArray(ifstream& inFile, Purchase purchaseArray[], int count) {
    int i;
    char c;
    string s;
    while(!inFile.eof()) {
        inFile >> i >> c;
        getline(inFile, s, ';');
        purchaseArray[count].setCustomer(i);
        purchaseArray[count].setItem(s);
        count++;
    }
}

void fileErrorCheck(ifstream& inFile) {
    if(inFile.fail()) {
        cout << "File open failed." << endl;
        exit(1);
    }
}

