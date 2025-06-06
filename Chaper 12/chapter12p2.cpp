#include <iostream>


// we can also have functions that pass by reference rather than pass by value
// copying objects is expensive, so should pass by reference
void printString(const std::string& words);



int main() {

    // lvalues and rvalues
    // lvalues have an address - can be accessed
    // rvalues are temporary - the return value of some function or just literal values - dont have an address


    // can assign rvalue to an lvalue
    int x{10}; // recall this means allocate some space in ram, the address is called x, at that address store 10

    // can assign an lvalue to an lvalue

    int y{x};

    // cannot asign an rvalue to an rvalue or lvalue

    // rvalue reference
    int& yRef{y}; // a reference to y, note that we can change the value from the reference
    yRef = 11; // this is ok

    // can also have a const rvalue ref - means read only
    const int& otherYRef{y};

    // pass by reference example

    std::string example{"Hello world"};

    printString(example); // pass by reference

    // pointers

    int z{8};

    std::cout << &z << "\n"; // the address of operator returns a pointer

    int* pZ { &z };

    // can use pointer like a reference:
    *pZ = 9; // this is ok

    std::cout << *pZ << "\n"; // using the dereference operator to get the value
    std::cout << pZ << "\n"; // printing the address




    



    return 0;
}

void printString(const std::string& words) { // note that since using const we cannot change using the ref
    std::cout << words << "\n";
}