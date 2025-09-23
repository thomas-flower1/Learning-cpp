#include <iostream>
#include <format>

class Student {
    private:   
        std::string m_name{};
        int m_age{};
        std::string m_id{};

        
    public:
        Student(std::string& name, int age, std::string& id)
        :m_name{name}, m_age{age}, m_id{id} {


        }

        void print() {
            std::string formatted = std::format("Name{}, Age{}, ID{}", m_name, m_age, m_id);
            std::cout << formatted << "\n";

        }

        



};

int main() {



    return 0;
}