#include <iostream>
#include <vector>

template <typename T>
void printStack(const std::vector<T>& stack) {
    std::cout << "The length of the stack is: " << stack.size() << " (the number of the elements in the stack)" << "\n";
    std::cout << "The capacity of the stack is: " << stack.capacity() << " (the number of elements it can hold before resizing)" << "\n";

}

int main() {

    // std::vector<int> stack{}; // should automatically deduce the type


    // the difference between resize and reserve

    // resize changes both the length and capacity
    std::vector<int> s{};

    // lets use resize
    s.resize(10);
    printStack(s);
    std::cout << "The element at index 8 is " << s[8] << "\n"; // will be 0,

    // now lets use reserve
    s.reserve(15);
    printStack(s);


    



    return 0;
}