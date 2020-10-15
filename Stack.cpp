#include <exception>

#include "Stack.h"

Stack::Stack()
{
    _array = new int[_capacity];
}


Stack::~Stack()
{
    delete[] _array;
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
        newArray[i] = _array[i];
    }
    _capacity *= _growthFactor;
    delete[] _array;
    _array = newArray;
}


void Stack::Push(int element)
{
    if (_length >= _capacity)
    {
        ResizeArray();
    }

    _array[_length] = element;
    _length++;
}


int Stack::Pop()
{
    if (_length == 0)
    {
        throw std::exception("Stack is empty\n");
    }
    --_length;
    return _array[_length];
}


int Stack::GetTop()
{
    if (_length == 0)
    {
        throw std::exception("Stack is empty\n");
    }
    return _array[_length - 1];
}
