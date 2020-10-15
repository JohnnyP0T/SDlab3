#include <exception>

#include "RingBuffer.h"


RingBuffer::RingBuffer()
{
	_array = new int[_length];
}


RingBuffer::RingBuffer(int length)
{
	_length = length;
	_array = new int[_length];
}


RingBuffer::~RingBuffer()
{
	delete[] _array;
}


void RingBuffer::Push(int data)
{
	_array[_startPointer] = data;
	_startPointer = (_startPointer + 1) % _length;
	++_overallSize;
	if (_occupiedSpace < _length)
	{
		++_occupiedSpace;
	}

	if (_overallSize > _length)
	{
		_endPointer = (_endPointer + 1) % _length;
	}
}


int RingBuffer::Pop()
{
	if (_occupiedSpace == 0)
	{
		throw std::exception("Ring is empty\n");
	}

	--_occupiedSpace;
	int temp = _array[_endPointer];
	_endPointer = (_endPointer + 1) % _length;
	return temp;
}


int RingBuffer::GetFreeQuantity()
{
	return (_length - _occupiedSpace);
}


int RingBuffer::GetOccupiedQuantity()
{
	return _occupiedSpace;
}


int RingBuffer::GetTop()
{
	if (_overallSize == 0 || _occupiedSpace == 0)
	{
		throw std::exception("Ring is empty\n");
	}

	if (_startPointer == 0)
	{
		return _array[_length - 1];
	}
	return _array[(_startPointer - 1)];
}


