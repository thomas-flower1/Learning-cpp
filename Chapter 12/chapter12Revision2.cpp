#include <iostream>


void printGreeting(const std::string& greeting);
void address(const int* number); // pass by address, 

const int& ref();

int main() {
    // lvalue - addressable, left value, 
    int x{10}; // here x is an lvalue and 10 is an rvalue (temp), since 10 is destroyed here
    int y{11};
    int z{12};

    // reference
    int& xRef{x}; // a reference to the int x, can modify it here

    // like this
    xRef = 100; // this is ok

    // can also have const lvalue reference
    const int& yRef{y}; // we cannot modify the value of y, read only

    // we cannot change a ref once it has been initialized

    std::string greeting{"Hello, how are you?"};

    // pass by reference
    printGreeting(greeting); 

    // pointers basics
    // pointers hold an address, can be dereferenced, address of operator returns a pointer
    int* pX{&x};  // a pointer to x

    std::cout << "The address of x is: " << pX << "\n";
    std::cout << "The value of x is " << *pX << "\n"; // using the dereference operator

    // we can also use a pointer like a reference 
    // like this

    *pX = 99; // again using the dereference operator

    // null pointer:

    int* np {nullptr}; // either initialize your pointers or use a null pointer - avoid setting to a garbage address

    // type of const pointers
    int* pZ{&z}; // a normal pointer
    const int* pZ2{&z}; // note that we cannot modify the value using this pointer, but can point to something else
    pZ2 = &x; // this is ok

    int* const pZ3{&z}; // we cannot change what this pointer points to, but can modify the value
    *pZ3 = 100000; // this is ok


    // pass by address
    address(&x);

    std::cout << ref() << "\n";








    return 0;
}


void printGreeting(const std::string& greeting) { // const so we cannot change the reference
    std::cout << greeting << "\n";
}

void address(const int* number) {
    std::cout << *number << "\n";
}

const int& ref() {
    static const int number {10};

    return number;

}
