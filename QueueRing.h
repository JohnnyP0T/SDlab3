#ifndef _QUEUERING_H_
#define _QUEUERING_H_

#pragma once

#include "RingBuffer.h"

/// @brief ������� �� ���� ���������� ������
class QueueRing
{
private:
	RingBuffer* _ringBuffer;
public:

	QueueRing();

	~QueueRing();

	/// @brief ���������� � �������
	/// @param data ��������
	void EnQueue(int data);

	/// @brief ������� �� �������
	/// @return ��������
	int DeQueue();

	/// @brief ������� �� ������� �� ������
	/// @return ��������
	int GetTop();

	/// @brief �������� ���������� ��������� ���� � ������
	/// @return ���������� ��������� ����
	int GetFreeSpace();

	/// @brief �������� ���������� ������� ���� � ������
	/// @return ���������� ������� ����
	int GetOccupiedSpace();

};

#endif