#ifndef _QUEUE_TWO_STACKS_H
#define _QUEUE_TWO_STACKS_H

#pragma once

#include"Stack.h"

/// @brief очередь на базе двух стеков
class QueueTwoStacks
{
private:
	Stack* stackFirst;
	Stack* stackSecond;

public:
	QueueTwoStacks();
	
	~QueueTwoStacks();

	/// @brief добавление в очередь
	/// @param data значение
	void EnQueue(int data);
	
	/// @brief достать из очереди
	/// @return значение
	int DeQueue();

	/// @brief Размер двух стеков
	/// @return значение
	int GetLength();

	/// @brief достать из очереди не удаляя
	/// @return значение
	int GetTop();
};

#endif