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
	/// @brief Изменение размера стэка
	void ResizeArray();

public:
	/// @brief Конструктор
	Stack();
	
	/// @brief Деструктор
	~Stack();
	
	/// @brief Проверка на пустоту
	/// @retval true	Это пустой
	/// @retval false	Это непустой
	/// @return Bool переменная
	bool IsEmpty();

	/// @brief Положить элемент в стек
	/// @param data Значение вставляемого элемента
	void Push(int data);
	
	/// @brief Вытащить первый элемент
	/// @return Значение последнего элемента
	int Pop();

	/// @brief Вытащить первый элемент не удаляя его
	/// @return Значение последнего элемента
	int GetTop();

	/// @brief Получить размер заполненного стэка
	/// @return Значение длинны стека
	int GetLength();

	/// @brief Получить весь размер стэка
	/// @return Общее значение 
	int GetCapacity();
};

#endif //_STACK_H_