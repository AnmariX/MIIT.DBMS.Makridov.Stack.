#pragma once
#ifndef STACK_H
#define STACK_H

#include <cstddef> // ��� size_t
#include <stdexcept> // ��� ����������

// ��������� ����� ��� ���������� �����
template <typename T>
class Stack {
private:
    struct Node {
        T data;         // ������ ����
        Node* next;     // ��������� �� ��������� ����

        Node(const T& value, Node* nextNode = nullptr)
            : data(value), next(nextNode) {}
    };

    Node* topNode;     // ��������� �� ������� ������� �����
    size_t stackSize;  // ���������� ��������� � �����

public:
    // �����������
    Stack();

    // ����������
    ~Stack();

    // ���������� �������� � ����
    void push(const T& value);

    // �������� �������� �� �����
    void pop();

    // ��������� �������� �������� �����
    T top() const;

    // ��������, ���� �� ����
    bool isEmpty() const;

    // ��������� ������� �����
    size_t size() const;
};

#include "Stack.cpp" // ��� �������� ���������� ������ ���� �������� � ������������ �����

#endif 
