#include <iostream>

template <typename T>
class Node {
    private:
        T m_value{}; // template holds the value
        Node* m_next{}; // pointer to next node, can't use a ref since it cannot be reseated

    public:
        Node(T value, Node* next=nullptr)
        : m_value{value}, m_next{next}
        {}

        void print() const {
            if(m_next) {
                std::cout << "The value is " << m_value << " The next nodes value is " << m_next->getValue() << "\n";
            } else {
                std::cout << "The value is " << m_value << "\n";

            }


        }

        Node& getNode() const { //want to return a reference of the next node
            return *m_next; // return by reference of a dereferenced pointer

        }

        void setNode(Node& node) { // given a reference of the node
            m_next = &node; // set the address to the next node


        }

        const T& getValue() const {
            return m_value; // returns a reference of the value
        }

        void setValue(T value) {
            m_value = value;

        }
 


};



int main()  {

    Node<int> node{10};
    Node<int> node2{11, &node};

    node2.print();


    return 0;

}