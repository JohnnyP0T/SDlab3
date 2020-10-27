#pragma once

#ifndef _QUEUERING_H_
#define _QUEUERING_H_

#include "RingBuffer.h"

/// @brief Очередь на базе кольцевого буфера
class QueueRing
{
private:
	RingBuffer* _ringBuffer;
public:
	/// @brief Конструктор
	QueueRing(int length = 16);

	/// @brief Деструктор
	~QueueRing();

	/// @brief Добавление в очередь
	/// @param data Значение последнего элемента
	void Enqueue(int data);

	/// @brief Достать из очереди
	/// @return Значение первого эелемента
	int Dequeue();

	/// @brief Достать из очереди не удаляя
	/// @return Значение последнего элемента
	int GetTop();

	/// @brief Получить количестко свободных мест в буфере
	/// @return Количество свободных мест
	int GetFreeQuantity();

	/// @brief Получить количестко занятых мест в буфере
	/// @return Количество занятых мест
	int GetOccupiedQuantity();

};

#endif // _QUEUERING_H_