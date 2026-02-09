#include <iostream>
using namespace std;

void changeFirstValue (int * numArray) {
    numArray[0] = 100;
}

void printAllValues(int * numArray, int size) {  // Gets a copy
    for (int x = 0; x < size; x++) {
        cout << numArray[x] << endl;
    }
}

int main() {
    int myArray[5] = {3,6,8,9,1};

    printAllValues(myArray, 5);

    changeFirstValue(myArray);

    printAllValues(myArray, 5);
   

    return 0;
}