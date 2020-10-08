#ifndef _QUEUERING_H_
#define _QUEUERING_H_

#pragma once

#include "RingBuffer.h"

/// @brief очередь на базе кольыевого буфера
class QueueRing
{
private:
	RingBuffer* _ringBuffer;
public:

	QueueRing();

	~QueueRing();

	/// @brief добавление в очередь
	/// @param data значение
	void EnQueue(int data);

	/// @brief достать из очереди
	/// @return значение
	int DeQueue();

	/// @brief достать из очереди не удаляя
	/// @return значение
	int GetTop();

	/// @brief получить количестко свободных мест в буфере
	/// @return количество свободных мест
	int GetFreeSpace();

	/// @brief получить количестко занятых мест в буфере
	/// @return количество занятых мест
	int GetOccupiedSpace();

};

#endif