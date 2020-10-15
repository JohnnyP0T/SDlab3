#ifndef _RING_BUFFER_H_
#define _RING_BUFFER_H_
#pragma once

/// @brief ��������� �����
class RingBuffer
{
private:
	int* _array;
	int _length = 16;
	int _occupiedSpace = 0;
	int _startPointer = 0;		///< ������ �� ����� �����
	int _endPointer = 0;	///< ������ �� ����� ������
	// ����� ������ ����� ��� �� ����������� �� 1 ������ ������ ������� ��������,
	// ���� ����������� ����� �� ������� �����
	int _overallSize = 0;

public:
	/// @brief ����������� � ����������
	/// @param length ������ ������
	RingBuffer(int length);

	/// @brief �����������
	RingBuffer();

	/// @brief ����������
	~RingBuffer();

	/// @brief �������� �������� � �����
	/// @param data �������� ������������ ��������
	void Push(int data);

	/// @brief �������� ����� ������ ������� �� ������
	/// @return �������� ���������� ��������
	int Pop();

	/// @brief �������� ���������� ��������� ���� � ������
	/// @return ���������� ��������� ����
	int GetFreeQuantity();

	/// @brief �������� ���������� ������� ���� � ������
	/// @return ���������� ������� ����
	int GetOccupiedQuantity();

	/// @brief ������� ����� �����
	/// @return �������� ���������� ��������
	int GetTop();

};

#endif //_RING_BUFFER_H_