#ifndef _RING_BUFFER_H_
#define _RING_BUFFER_H_
#undef GetFreeSpace()
#pragma once

/// @brief кольцевой буфер
class RingBuffer
{
private:
	int* _array;
	int _length = 16;
	int _occupiedSpace = 0;
	//индекс на самый новый
	int _startPointer = 0;
	//индекс на самый старый
	int _endPointer = 0;
	int _overallSize = 0;

public:
	RingBuffer(int length);

	RingBuffer();

	~RingBuffer();

	/// @brief положить значение в буфер
	/// @param data значение
	void Push(int data);

	/// @brief вытащить самый старый элемент из буфера
	/// @return значение элемента
	int Pop();

	/// @brief получить количестко свободных мест в буфере
	/// @return количество свободных мест
	int GetFreeSpace();

	/// @brief получить количестко занятых мест в буфере
	/// @return количество занятых мест
	int GetOccupiedSpace();

	/// @brief вернуть самый новый
	/// @return 
	int GetTop();

};

#endif