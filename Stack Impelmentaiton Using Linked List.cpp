

#include <iostream>

class Node {
public:
    int nodeValue;
    Node* next;
    Node(int value) {
        this->nodeValue = value;
        this->next = nullptr;
    }
};

class Stack {
    Node* head;
public:
    Stack() {
        this->head = nullptr;
    }

    bool isEmpty() {
        if (head == nullptr) {
            return true;
        }
        else {
            return false;
        }
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    int pop() {
        if (head == nullptr) {
            std::cout << "Stack is empty" << std::endl;
            return -1;
        }
        else {
            Node* temp = head;
            head = head->next;
            int val = temp->nodeValue;
            delete temp;
            return val;
        }
    }

    int top() {
        if (head == nullptr) {
            std::cout << "Stack is empty Noting to show" << std::endl;
        }
        else {
            return head->nodeValue;
        }
    }
};


int main()
{
    std::cout << "Hello World!\n";
    Stack s;
    s.push(5);
    s.push(15);
    s.push(25);

    std::cout << s.top() << std::endl;
    std::cout<<"Popped value:"<<s.pop()<<std::endl;
    std::cout << s.top() << std::endl;
}

