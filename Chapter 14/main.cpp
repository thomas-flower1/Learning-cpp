#include <iostream>
#include <format>

/*
Covers all of chapter 14

*/

// 14.3 Member functions
struct Car {
    int miles{}; // note that member variables are public by default in a struct
    int year{}; 

    void print() const {
        std::string text{std::format("Miles: {}, Year: {}", miles, year)};
    }

    void drive() {
        std::cout << "Vroom Vroom" << "\n";
    }


};

// And the exercise
struct IntPair {
    int num1{};
    int num2{};

    void print(){
        // std::cout << "Pair" << "(" << num1 << "," << num2 << ")" << "\n";

        // lets try c++ formatting
        std::string text{std::format("Pair({},{})\n", num1, num2)};
        std::cout << text;
    }

    bool isEqual() {
        return num1 == num2;
    }

};

// 14.5 public and private members and access specifiers
class Point3d {
    private:
        int m_x{};
        int m_y{};
        int m_z{};
    
    public:
        void setValues(int x, int y, int z) {
            m_x = x;
            m_y = y;
            m_z = z;
        }

        void print() {
            std::string text{std::format("<{}, {}, {}>", m_x, m_y, m_z)};
            std::cout << text << "\n";
        }

        bool isEqual(Point3d point) {
            return m_x == point.m_x && m_y == point.m_y && m_z == point.m_z;
        }

};

// 14.6 Access functions
class Date {
    private:
        int m_day{};
        int m_month{};
        int m_year{};
    
    public: // for all of these can return by value
        int getDay(){
            return m_day;
        }

        void setDay(int day) {
            m_day = day;
        }

        int getMonth() {
            return m_month;
        }

        void setMonth(int month) {
            m_month = month;
        }

        int getYear() {
            return m_year;
        }

        void setYear(int year) {
            m_year = year;
        }

};


int main() {

    // 14.3 Member functions
    Car car{};
    car.year = 2012;
    std::cout << car.year << "\n"; // since the member variables are public

    // Exercises
    IntPair p1{1, 2};
    std::cout << "p1: ";
    p1.print(); // uses cool formatting function from c++20

    // 14.4 Const class objects and const member functions
    const Car car2{}; // cannot modify any of the member variables

    // 14.5 Public and private members and access specifiers
    Point3d point1{};
    point1.setValues(1, 2, 3);

    Point3d point2{};
    point2.setValues(1, 2, 3);
    std::cout << point1.isEqual(point2) << "\n";

    // 14.6 Access functions
    Date date{};
    date.setDay(24);
    date.setMonth(7);
    date.setYear(2025);



    return 0;




}