#ifndef _QUEUE_TWO_STACKS_H
#define _QUEUE_TWO_STACKS_H

#pragma once

#include"Stack.h"

/// @brief ������� �� ���� ���� ������
class QueueTwoStacks
{
private:
	Stack* stackFirst;
	Stack* stackSecond;

public:
	QueueTwoStacks();
	
	~QueueTwoStacks();

	/// @brief ���������� � �������
	/// @param data ��������
	void EnQueue(int data);
	
	/// @brief ������� �� �������
	/// @return ��������
	int DeQueue();

	/// @brief ������ ���� ������
	/// @return ��������
	int GetLength();

	/// @brief ������� �� ������� �� ������
	/// @return ��������
	int GetTop();
};

#endif