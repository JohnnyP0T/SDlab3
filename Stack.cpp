#include <exception>

#include "Stack.h"

Stack::Stack()
{
    _data = new int[_capacity];
}


Stack::~Stack()
{
    delete[] _data;
}


bool Stack::IsEmpty()
{
    return (_length == 0) ? true : false;
}


int Stack::GetLength()
{
    return _length;
}


int Stack::GetCapacity()
{
    return _capacity;
}


void Stack::ResizeArray()
{
    int* newArray = new int[_capacity * _growthFactor];

    for (int i = 0; i < _capacity; i++)
    {
        newArray[i] = _data[i];
    }

    _capacity *= _growthFactor;
    delete[] _data;
    _data = newArray;
}


void Stack::Push(int element)
{
    if (_length >= _capacity)
    {
        ResizeArray();
    }

    _data[_length] = element;
    _length++;
}


int Stack::Pop()
{
    if (_length == 0)
    {
        throw std::exception("Stack is empty\n");
    }

    --_length;
    return _data[_length];
}


int Stack::GetTop()
{
    if (_length == 0)
    {
        throw std::exception("Stack is empty\n");
    }

    return _data[_length - 1];
}
