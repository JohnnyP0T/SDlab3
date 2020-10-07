#ifndef _RING_BUFFER_H_
#define _RING_BUFFER_H_
#undef GetFreeSpace()
#pragma once

/// @brief ��������� �����
class RingBuffer
{
private:
	int* _array;
	int _length = 16;
	int _occupiedSpace = 0;
	//������ �� ����� �����
	int _startPointer = 0;
	//������ �� ����� ������
	int _endPointer = 0;
	int _overallSize = 0;

public:
	RingBuffer(int length);

	RingBuffer();

	~RingBuffer();

	/// @brief �������� �������� � �����
	/// @param data ��������
	void Push(int data);

	/// @brief �������� ����� ������ ������� �� ������
	/// @return �������� ��������
	int Pop();

	/// @brief �������� ���������� ��������� ���� � ������
	/// @return ���������� ��������� ����
	int GetFreeSpace();

	/// @brief �������� ���������� ������� ���� � ������
	/// @return ���������� ������� ����
	int GetOccupiedSpace();

	/// @brief ������� ����� �����
	/// @return 
	int GetTop();

};

#endif