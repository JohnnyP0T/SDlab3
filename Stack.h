#ifndef _STACK_H_
#define _STACK_H_

#pragma once


/// @brief Стэк
class Stack
{
private:
	int* _array;
	const int _growthFactor = 2;
	int _length = 0;
	int _capacity = 4;

private:
	/// @brief изменение размера стэка
	void ResizeArray();

public:
	Stack();
	
	~Stack();
	
	/// @brief проверка на пустоту
	/// @return тру - это пустой
	bool IsEmpty();

	/// @brief положить элемент в стек
	/// @param data значение
	void Push(int data);
	
	/// @brief вытащить первый элемент
	/// @return значение
	int Pop();

	/// @brief вытащить первый элемент не удаляя его
	/// @return значение
	int GetTop();

	/// @brief получить размер заполненного стэка
	/// @return значение
	int GetLength();

	/// @brief получить весь размер стэка
	/// @return значение
	int GetCapacity();
};

#endif