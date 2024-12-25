#include "pch.h"
#include "CppUnitTest.h"
#include "..\StackProjectMakridov\Stack.h" // ���� � ������������� ����� Stack.h

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackTests
{
    TEST_CLASS(StackTests)
    {
    public:
        // ����: ����� ���� ����
        TEST_METHOD(IsEmptyInitially)
        {
            Stack<int> stack; // ��������� ��� int
            Assert::IsTrue(stack.isEmpty());
            Assert::AreEqual(size_t(0), stack.size());
        }

        // ����: ���������� �������� ����������� ������ �����
        TEST_METHOD(PushIncreasesSize)
        {
            Stack<int> stack; // ��������� ��� int
            stack.push(42);
            Assert::IsFalse(stack.isEmpty());
            Assert::AreEqual(size_t(1), stack.size());
            Assert::AreEqual(42, stack.top());
        }

        // ����: �������� �������� ��������� ������ �����
        TEST_METHOD(PopDecreasesSize)
        {
            Stack<int> stack; // ��������� ��� int
            stack.push(10);
            stack.push(20);
            Assert::AreEqual(size_t(2), stack.size());

            stack.pop();
            Assert::AreEqual(size_t(1), stack.size());
            Assert::AreEqual(10, stack.top());

            stack.pop();
            Assert::IsTrue(stack.isEmpty());
        }

        // ����: Pop ������� ����������, ���� ���� ����
        TEST_METHOD(PopThrowsWhenEmpty)
        {
            Stack<int> stack; // ��������� ��� int
            auto func = [&]() { stack.pop(); };
            Assert::ExpectException<std::underflow_error>(func);
        }

        // ����: Top ������� ����������, ���� ���� ����
        TEST_METHOD(TopThrowsWhenEmpty)
        {
            Stack<int> stack; // ��������� ��� int
            auto func = [&]() { stack.top(); };
            Assert::ExpectException<std::underflow_error>(func);
        }

        // ����: Push ��������� �������� � ���������� �������
        TEST_METHOD(PushAddsInCorrectOrder)
        {
            Stack<int> stack; // ��������� ��� int
            stack.push(1);
            stack.push(2);
            stack.push(3);

            Assert::AreEqual(3, stack.top());
            stack.pop();
            Assert::AreEqual(2, stack.top());
            stack.pop();
            Assert::AreEqual(1, stack.top());
        }
    };
}

