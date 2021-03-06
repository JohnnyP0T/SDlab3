#pragma once

#ifndef _STACK_H_
#define _STACK_H_


/// @brief ����
class Stack
{
private:
	int* _data;
	const int _growthFactor = 2;
	int _length = 0;
	int _capacity = 4;

private:
	/// @brief ��������� ������� �����
	void ResizeArray();

public:
	/// @brief �����������
	Stack();
	
	/// @brief ����������
	~Stack();
	
	/// @brief �������� �� �������
	/// @retval true	��� ������
	/// @retval false	��� ��������
	/// @return �������� �������� �� �������
	bool IsEmpty();

	/// @brief �������� ������� � ����
	/// @param data �������� ������������ ��������
	void Push(int data);
	
	/// @brief �������� ������ �������
	/// @return �������� ���������� ��������
	int Pop();

	/// @brief �������� ������ ������� �� ������ ���
	/// @return �������� ���������� ��������
	int GetTop();

	/// @brief �������� ������ ������������ �����
	/// @return �������� ������ �����
	int GetLength();

	/// @brief �������� ���� ������ �����
	/// @return ����� �������� 
	int GetCapacity();
};

#endif //_STACK_H_