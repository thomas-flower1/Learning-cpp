#include <iostream>

class Person {
    private:
        std::string_view m_name {"Anthony"};
        int m_age{ 36 };
    
    public:
        const std::string_view& getName() const { // public member function that returns a reference to the name
            return m_name;

        }

        void setName(std::string& name) {
            m_name = name;



        }

        


};

int main() {

    Person person;

    std::cout << person.getName() << "\n";
    
    std::string name{"Steve"};
    person.setName(name);

    std::cout << person.getName() << "\n";



    return 0;

}