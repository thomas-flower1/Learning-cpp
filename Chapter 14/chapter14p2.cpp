#include <iostream>


class Student{
    private:
        std::string m_name{};
        int m_age{};
    
    public:
        Student(std::string& name, int age)
            : m_name{name}, m_age{age}
         {
            std::cout << "constructor called" << "\n";
         }

         void print() const {
            // just a regular member function
            std::cout << "Name: " << m_name << " Age: " << m_age << "\n";
         }

};


class Employee {
    private:
        int m_id{};
        std::string m_name{};

    public:
        Employee(int id, std::string name)
            : m_id{id}, m_name{name}
        {

        }

        void print() const {
            std::cout << "id " << this->m_id << "Name: " << (*this).m_name << "\n";

        }


        
};

int main() {

    std::string name {"Gary"};
    Student student = Student(name, 23);

    Employee emp1 {100, "steve"};

    emp1.print()




    return 0;
}