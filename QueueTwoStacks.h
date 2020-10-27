#ifndef _QUEUE_TWO_STACKS_H
#define _QUEUE_TWO_STACKS_H

#pragma once

#include "Stack.h"

/// @brief ������� �� ���� ���� ������
class QueueTwoStacks
{
private:
	Stack* stackFirst;
	Stack* stackSecond;

public:
	/// @brief �����������
	QueueTwoStacks();
	
	/// @brief ����������
	~QueueTwoStacks();

	/// @brief ���������� � �������
	/// @param data �������� ���������� ��������
	void Enqueue(int data);
	
	/// @brief ������� �� �������
	/// @return �������� ������� ���������
	int Dequeue();

	/// @brief ������ ���� ������
	/// @return �������� ������ �������
	int GetLength();

	/// @brief ������� �� ������� �� ������
	/// @return �������� ���������� ��������
	int GetTop();
};

#endif //_QUEUE_TWO_STACKS_H