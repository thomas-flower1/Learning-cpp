#include <iostream>


class Node{
    private:
        int m_value{};
        Node* m_next{};

    
    public:
        Node(int value, Node* next=nullptr)
        : m_value{value}, m_next{next} {

        }

        int getValue() const { // return by value since its cheap to copy an int
            return m_value;

        }

        void setValue(int value)  { // pass by value since it's cheap
            m_value = value;

        }

        Node* getNext() {
            return m_next;
        }

        void setNext(Node& next) { // take a reference, since pass by value is expensive
            m_next = &next; // set next to the address of the reference

        }

        
};

class LinkedList {
    private:
        Node* m_head{};
        int m_size{};
    
    public:
        LinkedList(Node* head=nullptr) 
        : m_head{head} {
            if(m_head) {
                m_size = 1;
            } else {
                m_size = 0;
            }
        }

        void add(int value) {
            Node* newNode = new Node{value}; // new returns a pointer

            if(m_head) {
                // then we add to the end of the linked list
                newNode->setNext(*m_head);
                m_head = newNode;


            } else {
                m_head = newNode;
            
            }

            m_size ++;

        }

        void print() {
            Node* currentNode{m_head};

            while(currentNode) {
                std::cout << currentNode->getValue() << "\n";
                currentNode = currentNode->getNext();
            }

        }

        int size() {
            return m_size; // okay to return by value here since it's cheap to copy an int
        }

        int front() {
            return m_head->getValue();
        }

        Node* remove() {
            Node* tmp{m_head};
            m_head = m_head->getNext();
            m_size --;
            return tmp;
        }

        








};

int main() {
    Node node{10};
    Node node2{11};

    // node.setNext(node2);

    // std::cout << node.getNext()->getValue() << "\n"; // yay working

    // linked list

    LinkedList linkedList{&node};
    linkedList.add(11);
    linkedList.add(12);
    linkedList.print();

    std::cout << "\n";
    linkedList.remove();
    linkedList.print();






    return 0;
}