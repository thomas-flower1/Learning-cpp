#include <iostream>


// lets make a basic subtract function

int subtract(int x, int y) {

    return x - y;// recall that it is inexpensive to return by value in this case
}

float subtract(float x, float y) {
    return x - y;
}

int add(int x, int y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}


int multiply(const int x, const int y) {
    return x * y;
}


void foo(double x){
    
}

void foo(int) {

}


void printInt(int x) {
    std::cout << x << "\n";
}


void printInt(char) = delete;
void printInt(bool) = delete;


void error(int x) {

}

void error(int x, int y = 10) {

}


int main() {

    // Lesson 11.1
    float x{ 12.2 };
    float y{ 10.1 };

    std::cout << "X: " << x << " minus Y: " << y << " is equal to " << subtract(x, y) << "\n";

    // Lesson 11.2

    // note that we can also function overload by the number of parameters
    std::cout << "This uses the first add function: " << add(1, 2) << "\n";
    std::cout << "This uses the second add function:  " << add(1, 2, 3) << "\n";


    // *it should be noted that we cannot function overload by using different retrun types


    // Lesson 11.3


    // Step 1)
    // for the resolution chain, we first check if there are any direct matches
    int one { 1 };
    int two { 2} ;

    std::cout << "Calling the multiply function: " << multiply(one, two) << "\n"; // note that we can do this, we can use a trivial conversion

    // trivial conversions include - turning a non-const to a const, turning a non-ref to a ref

    // Step 2)
    // next we can try apply a numerical promotion

    // for example bool -> int, float -> double etc
    foo(true); // will be promoted to a bool
    foo(12.3f); // will be promoted to a double


    // Step 3)
    // the compiler will try to use numerical conversion
    // example: char -> int (type promotion) -> double, float etc (numerical conversion)

    // ... to be continued


    // Lesson 11.4
    // deleting functions

    // we have deleted the value for char and bool so they wont be promoted to int
    printInt(10); // okay

    // printInt(true); // error

    // .. to be continued after learning function templated


    // Lesson 11.5 
    // Default arguments

    // rules, if using forward declaration, the forward declaration must match the function declaration
    // cannot skip an argument in the function
    // the default arguments must come after the non default arguments

    // can be combined with function overloading but may result in an ambiguous results
    // example:

    // error(10); // which does this match to?
















    

    return 0;
}