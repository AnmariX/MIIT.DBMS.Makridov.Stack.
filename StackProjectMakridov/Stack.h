#pragma once
#ifndef STACK_H
#define STACK_H

#include <cstddef> 
#include <stdexcept> 

/**
* @brief Класс для реализации стека
*/
template <typename T>
class Stack {
private:
    struct Node {
        /**
        * @brief Данные узла
        * Указатель на следующий узел
        */
        T data;          
        Node* next;     

        Node(const T& value, Node* nextNode = nullptr)
            : data(value), next(nextNode) {}
    };
    /**
    * @brief Указатель на верхний элемент стека
    * Количество элементов в стеке
    */
    Node* topNode;      
    size_t stackSize;   
    
public:
   /**
   * @brief Конструктор
   */
    Stack();
    /**
    * @brief Деструктор
    */
    ~Stack();
    /**
    * @brief Добавление элемента в стек
    */
    void push(const T& value);
    /**
    * @brief Удаление элемента из стека
    */
    void pop();
    /**
    * @brief Получение верхнего элемента стека
    */
    T top() const;
    /**
    * @brief Проверка, пуст ли стек
    */
    bool isEmpty() const;
    /**
    * @brief Получение размера стека
    */
    size_t size() const;
};

#include "Stack.cpp" 

#endif 
