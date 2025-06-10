#include <iostream>

#define PASS

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

template <typename T>
class LinkedList {
    private:
        Node<T>* m_head{}; // the number of elements
        int m_size{}; // the size of the linked list
    
    public:
        LinkedList(Node<T>* head=nullptr) 
            : m_head{head}{
                if (m_head) {
                    m_size = 1;
                } else {
                    m_size = 0;
                }

            }
               
        
        
        void add(T value){
            // creating a new node
             Node<T> newNode = new Node{value};



            if (m_head) {
                // create a new node and add it to the linked list
                m_head->setNode(&newNode);

            } else {
                Node<T> newNode = new Node{value};
                m_head = newNode;
            }

            m_size++;


        }

        void size() { // return by value since an int is cheap to copy
            PASS;
        }

        void remove() {
            PASS;
        }

        void print() {
            Node<T>* currentNode{&m_head};
            while(currentNode) {
                std::cout << currentNode->print() << "\n";
                currentNode = &currentNode->getNode()
            }

        }

        void isEmpty() {
            PASS;

        }

        const T& front() const {
            return m_head->getValue();
            
        

        }

};


int main()  {
    Node<int> node{10};
    LinkedList<int> linkedList{&node};

    std::cout << linkedList.front() << "\n";
    linkedList.print();


   


    return 0;

}