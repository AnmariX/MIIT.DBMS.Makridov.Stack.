#include <iostream>
#include "..\StackProjectMakridov\Stack.h"

int main() {
    Stack<int> stack;

    // Добавление элементов в стек
    std::cout << "Pushing elements onto the stack..." << std::endl;
    stack.push(5);
    stack.push(10);
    stack.push(20);

    std::cout << "Top element: " << stack.top() << std::endl; 
    stack.pop();
    std::cout << "New top element: " << stack.top() << std::endl; 
    std::cout << "Stack size: " << stack.size() << std::endl; 

    // Очистка стека
    std::cout << "Popping all elements..." << std::endl;
    while (!stack.isEmpty()) {
        std::cout << "Popped: " << stack.top() << std::endl;
        stack.pop();
    }

    std::cout << "Stack is empty: " << std::boolalpha << stack.isEmpty() << std::endl; 

    return 0;
}
