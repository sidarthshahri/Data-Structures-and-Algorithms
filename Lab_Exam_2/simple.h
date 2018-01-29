//
// Created by Sidarth Shahri on 4/11/17.
//

#ifndef LAB_EXAM_2_SIMPLE_H
#define LAB_EXAM_2_SIMPLE_H

#include <fstream>

using namespace std;

class simple {
public:
    friend ostream& operator<<(ostream&, const simple);
    void setNumber(int);
    void setLetter(char);
private:
    int number;
    char letter;
};


#endif //LAB_EXAM_2_SIMPLE_H
