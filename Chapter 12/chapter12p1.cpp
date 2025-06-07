#include <iostream>
#include <string>
/*
Lessons covered - 12.1 - 12.9
Topics covered, lvalues and rvalues - what they are, lvalue references, pointer basics
6/6/25
*/

void printString(std::string& words);// turn the pass by value to pass by reference
void printSomething(const int& num);




int main(){

    int x{10};

    int& xRef{x};

    // lets print the address of both the reference and the actual address

    std::cout << "the address of x is: " <<  &x << "\n";
    std::cout << "The address of the reference is: " << &xRef << "\n";

    // not that when using an lvalue reference, we can change a value from either the variable or the reference

    xRef = 10;

    std::cout << x << "\n"; // will print 10

    // when creating a reference we should type match, dont want any unwanted conversions
    // note that a reference cannot change once initialized, also should initialize all references
    // references can have a diffrerent scope than their variables

    // example

    int tmp { 10 };

    {
        int& rTmp{ tmp }; // creating a lvalue reference
        rTmp = 11; // this is ok

    } // rTmp is destroyed here

    // lesson 12.4

    const int z{ 11 }; //creating an const int
    const int& zRef{ z }; // a reference to a const lvalue

    // this cannot be changed

    // we can also create a sort of read only reference using const
    int a{ 10 }; // modifyable lvalue int varaiable
    const int& aRef{ a }; // this is ok, will be read only

    std::cout << aRef << "\n"; // this is also ok

    // can only change using the a variable

    std::string myFavWord{ "bruh" }; // initialize a string

    // passing as an argument into the function
    printString(myFavWord);


    std::cout << myFavWord << "\n"; // the function changed the value


    // lesson 12.6
    printSomething(10); // will make a temporary object

    // when pass be reference using a const we can either pass a value (rvalue), pass a lvalue or a const lvalue - each will be turned into a lvalue reference

    // lesson 12.7

    // creating a pointer
    int num {10}; // initializing the variable
    int* pNum{ &num }; // a pointer to the address of num, address off operator returns a pointer

    // we can use a pointer as a sort of reference and change the num
    *pNum = 11; // like this

    std::cout << *pNum << "\n";

    // lesson 12.8

    // null pointers, pointers that dont point to anything, they are different to empty pointers which will point to a garbage address
    // rule of thumb initialize pointers to either null or an address

    int* np{ nullptr }; // using modern c++

    // lesson 12.9

    int example{ 100 }; // initializing the variable
    int otherExample{ 101 };

    int* pExample{ &example }; // a normal pointer
    const int* pExample2{ &example }; // a pointer to a const, the pointer can change but the value cannot

    pExample2 = &otherExample; // this is ok, changing what we point to - change the address

    int* const pExample3{ &example }; // a pointer that is const, cannot change the address, can change the value

    *pExample3 = 1; // this is ok only changing the value









    return 0;

}

void printString(std::string& ref) { // by passing by reference it is less expensive than copying an object, only take modifyable lvalues
    std::cout << ref << "\n";

    // since we are passing by reference we could also change the value of what we are referencing

    ref = "my least favourite word"; // changing by reference


}

void printSomething(const int& num) {
    std::cout << num << "\n";

}

