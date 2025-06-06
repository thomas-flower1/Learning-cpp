#include <iostream>






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

    



    return 0;
}