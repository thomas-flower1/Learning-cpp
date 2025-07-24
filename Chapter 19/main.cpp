#include <iostream>

int main() {
    // lets do some memory tasks

    int* ptr{new int{7}};

    std::cout << *ptr << "\n";

    // lets free the memory
    delete ptr;
    ptr = nullptr; // make sure we dont have any dangling references


    std::cout << ptr << "\n";

    // now lets do it a bit more safely

    int* pNumber{ new (std::nothrow) int {10} }; // if no memory to allocate, returns a null ptr
    if(pNumber) {
        // do something
    }



    return 0;
}