#ifndef _QUEUE_TWO_STACKS_H
#define _QUEUE_TWO_STACKS_H

#pragma once

#include "Stack.h"

/// @brief Очередь на базе двух стеков
class QueueTwoStacks
{
private:
	Stack* stackFirst;
	Stack* stackSecond;

public:
	/// @brief Конструктор
	QueueTwoStacks();
	
	/// @brief Деструктор
	~QueueTwoStacks();

	/// @brief Добавление в очередь
	/// @param data Значение последнего элемента
	void Enqueue(int data);
	
	/// @brief Достать из очереди
	/// @return Значение первого эелемента
	int Dequeue();

	/// @brief Размер двух стеков
	/// @return Значение длинны очереди
	int GetLength();

	/// @brief Достать из очереди не удаляя
	/// @return Значение последнего элемента
	int GetTop();
};

#endif //_QUEUE_TWO_STACKS_H