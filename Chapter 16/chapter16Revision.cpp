#include <iostream>
#include <vector>

// passing a vector as an argument to a function
template <typename T>
auto printFirst(const T& arr) { // passing a reference of an array
    // std::cout << arr[0] << "\n";

    return arr;


}

int main() {

    // lets make a vector
    std::vector numbers{10, 12, 23, 23}; // will automatically deduce the type of array

    // // there are two types of ways to get an element
    // // index

    // std::cout << numbers[0] << "\n";

    // // we can also use the at member function

    // std::cout << numbers.at(2) << "\n";

    // // getting the size of an array
    // // bit annoying since the function returns an unsigned integer

    // int size{static_cast<int>(numbers.size())}; // so ugly
    // std::cout << "Size: " << size << "\n";

    // // can then use this to loop through an array
    // for(int i = 0; i < size; ++i) {
    //     std::cout << numbers[i] << "\n";
    // }

    // // alternatively, which is easier, can use a for each loop
    // for(auto num : numbers) {
    //     std::cout << num << "\n";
    // }
    auto r = printFirst(numbers);
    std::cout << typeid(r).name() << "\n";




    return 0;
}