#pragma once
#ifndef STACK_H
#define STACK_H

#include <cstddef> // Для size_t
#include <stdexcept> // Для исключений

// Шаблонный класс для реализации стека
template <typename T>
class Stack {
private:
    struct Node {
        T data;         // Данные узла
        Node* next;     // Указатель на следующий узел

        Node(const T& value, Node* nextNode = nullptr)
            : data(value), next(nextNode) {}
    };

    Node* topNode;     // Указатель на верхний элемент стека
    size_t stackSize;  // Количество элементов в стеке

public:
    // Конструктор
    Stack();

    // Деструктор
    ~Stack();

    // Добавление элемента в стек
    void push(const T& value);

    // Удаление элемента из стека
    void pop();

    // Получение верхнего элемента стека
    T top() const;

    // Проверка, пуст ли стек
    bool isEmpty() const;

    // Получение размера стека
    size_t size() const;
};

#include "Stack.cpp" // Для шаблонов реализация должна быть доступна в заголовочном файле

#endif 
