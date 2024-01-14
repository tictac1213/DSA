// linked list
#include <iostream>

// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Stack class to implement stack operations
class Stack {
private:
    Node* top;

public:
    Stack() : top(nullptr) {}

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        newNode->next = top;
        top = newNode;
    }

    int pop() {
        if (isEmpty()) {
            std::cerr << "Stack underflow!" << std::endl;
            return -1; // Assuming -1 represents an error or an invalid value
        }

        int poppedData = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;

        return poppedData;
    }

    int peek() {
        if (isEmpty()) {
            std::cerr << "Stack is empty!" << std::endl;
            return -1; // Assuming -1 represents an error or an invalid value
        }

        return top->data;
    }

    void display() {
        Node* current = top;
        while (current) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    std::cout << "Stack:" << std::endl;
    stack.display();

    std::cout << "Pop: " << stack.pop() << std::endl;
    std::cout << "Peek: " << stack.peek() << std::endl;

    std::cout << "Stack after pop:" << std::endl;
    stack.display();

    return 0;
}
