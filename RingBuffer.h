#ifndef _RING_BUFFER_H_
#define _RING_BUFFER_H_
#pragma once

/// @brief Кольцевой буфер
class RingBuffer
{
private:
	int* _array;
	int _length = 16;
	int _occupiedSpace = 0;
	int _startPointer = 0;		///< Индекс на самый новый
	int _endPointer = 0;	///< Индекс на самый старый
	// Общий размер нужен что бы передвинуть на 1 индекс самого старого элемента,
	// если стартпоитер пошел по второму кругу
	int _overallSize = 0;

public:
	/// @brief Конструктор с параметром
	/// @param length Длинна буфера
	RingBuffer(int length);

	/// @brief Конструктор
	RingBuffer();

	/// @brief Деструктор
	~RingBuffer();

	/// @brief Положить значение в буфер
	/// @param data Значение вставляемого элемента
	void Push(int data);

	/// @brief Вытащить самый старый элемент из буфера
	/// @return Значение последнего элемента
	int Pop();

	/// @brief Получить количестко свободных мест в буфере
	/// @return Количество свободных мест
	int GetFreeQuantity();

	/// @brief Получить количестко занятых мест в буфере
	/// @return Количество занятых мест
	int GetOccupiedQuantity();

	/// @brief Вернуть самый новый
	/// @return Значение последнего элемента
	int GetTop();

};

#endif //_RING_BUFFER_H_