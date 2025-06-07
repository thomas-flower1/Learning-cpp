#include <iostream>

/* Lessons covered - 12.10  - 12.15
Topics covered, pass by address, return by reference, std::optional
7/6/25
*/

const std::string& byReference();
void printString(const std::string* words);

int main() {

    // 12.10
    // pass by address

    std::string myFavWord{"bruh"};
    printString(&myFavWord);


    std::cout << byReference() << "\n"; // 





    return 0;
}


void printString(const std::string* words) { // we can only pass in lvalues for this, no rvalues
    if(!words) {
        return; // if given a null ptr just return straight away

    }

    std::cout << *words << "\n"; // dereference words and print



    
}

const std::string& byReference() {

    static const std::string greeting{"Hello world"}; // need to give lifetime duration, otherwise destroyed when used later (get an undefined reference)
    //const std::string greeting{"Hello world"}; // wont work since

    return greeting; 



} // greeting is destroyed here, so the reference is now invalid
