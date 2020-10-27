#pragma once

#ifndef _QUEUERING_H_
#define _QUEUERING_H_

#include "RingBuffer.h"

/// @brief ������� �� ���� ���������� ������
class QueueRing
{
private:
	RingBuffer* _ringBuffer;
public:
	/// @brief �����������
	QueueRing(int length = 16);

	/// @brief ����������
	~QueueRing();

	/// @brief ���������� � �������
	/// @param data �������� ���������� ��������
	void Enqueue(int data);

	/// @brief ������� �� �������
	/// @return �������� ������� ���������
	int Dequeue();

	/// @brief ������� �� ������� �� ������
	/// @return �������� ���������� ��������
	int GetTop();

	/// @brief �������� ���������� ��������� ���� � ������
	/// @return ���������� ��������� ����
	int GetFreeQuantity();

	/// @brief �������� ���������� ������� ���� � ������
	/// @return ���������� ������� ����
	int GetOccupiedQuantity();

};

#endif // _QUEUERING_H_