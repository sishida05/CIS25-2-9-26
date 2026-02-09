#include <iostream>
using namespace std;

int main() {
    int x = 25;
    int * pointerToX = &x;
    cout << "The value of x is: " << x << endl;
    cout << "The memory address of x is: " << &x << endl;
    cout << "The value of pointerToX is: " << pointerToX << endl;
    cout << "The memory address of pointerToX is: " << &pointerToX << endl;
    cout << "The value of what pointerToX points to is: " << *pointerToX << endl;
    return 0;
}
