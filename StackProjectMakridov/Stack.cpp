#ifndef STACK_CPP
#define STACK_CPP

#include "../StackProjectMakridov/Stack.h"

template <typename T>
Stack<T>::Stack() : topNode(nullptr), stackSize(0) {}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void Stack<T>::push(const T& value) {
    topNode = new Node(value, topNode);
    ++stackSize;
}

template <typename T>
void Stack<T>::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty. Cannot pop.");
    }
    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
    --stackSize;
}

template <typename T>
T Stack<T>::top() const {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty. Cannot retrieve top element.");
    }
    return topNode->data;
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return topNode == nullptr;
}

template <typename T>
size_t Stack<T>::size() const {
    return stackSize;
}

#endif 
