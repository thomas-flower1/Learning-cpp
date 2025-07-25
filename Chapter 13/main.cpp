#include <iostream>

// 13.2 Unscoped Enums
enum Colour{

    red,
    yellow, 
    green,
};


// The exercise 
namespace MonsterType {

        enum MonsterType {
        orc,
        goblin,
        ogre, 
        skeleton,

    };

}

// 13.3
enum Days {
    dayoff, // this is 0
    monday,
    tuesday,
    wednesday,
    thursday,
    friday, 
    saturday,
    sunday,
};

// 13.4

std::string getDay(Days day) {
    switch(day) {
        case monday:
            return "Monday";
        case tuesday:
            return "tuesday";
        
        default:
            return "Bruh";
    }

}


// 13.7
struct Person {
    std::string name{};
    int age{};
    int test;

};


int main() {


    // 13.2 Unscoped Enums
    Colour shirt{ red };
    std::cout << shirt << "\n";

    // and the exercise
    MonsterType::MonsterType orc{ orc };

    // 13.3
    Days unknown{}; // will be initialized to the default value
    std::cout << unknown<< "\n";

    // we can also change the value
    unknown = static_cast<Days>(3);
    std::cout << unknown << "\n";

    // 13.4
    Days m{monday};
    std::cout << getDay(m) << "\n";


    // 13.7
    Person person{}; // create an empty person
    person.name = "John"; // using the dot operator to assign the values
    person.age = 33;
    std::cout << person.age<< "\n";

    std::cout << person.test << "\n";

    double num;
    std::cout << num << "\n"; // garbage value dont do this




    return 0;
}