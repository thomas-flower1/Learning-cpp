#include <vector>
#include <iostream>
#include <iterator>

template <typename T>
void test(const std::vector<T>& array) {
    std::cout << array.size() << "\n";
}

int main() {
    // let's make an empty vector
    // note that vector uses templates to dictate what type of data we want to store

    std::vector numbers{ 10, 12, 24, 34 }; // initialize an empty vector

    std::vector<int> empty(10); 


    std::cout << sizeof(int) << "\n";
    std::cout << sizeof(empty[9]) << "\n";

    int size {static_cast<int> (numbers.size())};

    std::cout << size << "\n";

    // lesson 16.4

    std::vector myFavNumbers{10, 20, 30}; // will infer as int type
    test(myFavNumbers); // will convert to a reference

    // lesson 16.7

    std::vector score{90, 84, 42, 94, 77, 65};
    int count = static_cast<int>(score.size());
    for(int i = 0; i < count; i++) {
        std::cout << score[i] << "\n";
    }

    // because the size member function returns an unsigned int we need to static cast, overall a lot of code for such a simple thing
    // prefer for each loops

    // lesson 16.8

    std::vector students{"steve", "anthony", "emily", "ben", "ryan", "amy"};

    for(const auto& student : students) { // because string are expensive, get an reference instead
        std::cout << student << "\n";
    }

    
    


    
    

    

    return 0;

}