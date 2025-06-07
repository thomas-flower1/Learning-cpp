#include <iostream>
/*
Revision of the first half of chapter 12
6/6/25

*/


// we can also have functions that pass by reference rather than pass by value
// copying objects is expensive, so should pass by reference
void printString(const std::string& words);
void printNumber(int& num);



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

    printNumber(x); // pass by mutable reference

    // pointers

    int z{8};

    std::cout << "Using the address of operator (returns a pointer) " << &z << "\n"; // the address of operator returns a pointer

    int* pZ { &z };

    // can use pointer like a reference:
    *pZ = 9; // this is ok

    std::cout << "Using the dereference operator " << *pZ << "\n"; // using the dereference operator to get the value
    std::cout << "Just printing the pointe r" << pZ << "\n"; // printing the address

    // creating and using nullpointers
    int* np{ nullptr }; // a pointer that points at nothing, different to an empty pointer

    //pointer should either be a null pointer or an address

    const int* pointer1{ &z}; // a pointer to const values, can point to something else (can change the address)
    pointer1 = &x; // this is ok


    int* const pointer2{ &z}; // a pointer that is const (cannot point to something else)- can use to change the value
    *pointer2 = 11; // this is ok

    


    return 0;
}

void printString(const std::string& words) { // note that since using const we cannot change using the ref
    std::cout << words << "\n";
}

void printNumber(int& num){ // have access to the reference, can change the value
    std::cout << "This is a reference of the number: " << num << "\n";

    num++;

    std::cout << "I can change the number: " << num << " see?" << "\n";

}