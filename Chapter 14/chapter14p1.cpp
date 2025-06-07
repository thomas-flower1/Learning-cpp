#include <iostream>

/*
Lessons covered 14.1 - 14.7
Topics covered, intro to classes, access modifiers, member functions, getters and setters
67/6/25

*/


struct Employee {

    std::string name{};
    int age{};


    void print() const { 
        std::cout << "Name: " << name << " Age: " << age << "\n";
    }

};

class Person {

    public:
        std::string_view name{};
        int age{};

        void print() const {
            std::cout << name << "\n";


        }
  

};

class FavouriteNumbers {
    private:
        int m_a{10};
        int m_b{11};
        int m_c{12};
    
    public:
        int getA() const {
            return m_a;
        }

        void setA(int a){
            m_a = a;

        }

        

};



int main() {
    Employee emp {"Ben", 19};
    emp.print();


    const Employee emp2{"Simon", 22};
    emp2.print();

    Person p1{"Greg", 78};
    p1.print();

    FavouriteNumbers fav{};
    std::cout << fav.getA() << "\n";

    fav.setA(88); // pass by value

    std::cout << fav.getA() << "\n";




   



    return 0;

}

