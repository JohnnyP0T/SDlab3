#include <exception>

#include "RingBuffer.h"


RingBuffer::RingBuffer()
{
	_data = new int[_length];
}


RingBuffer::RingBuffer(int length)
{
	_length = length;
	_data = new int[_length];
}


RingBuffer::~RingBuffer()
{
	delete[] _data;
}


void RingBuffer::Push(int data)
{
	_data[_startPointer] = data;
	_startPointer = (_startPointer + 1) % _length;
	++_overallSize;

	if (_occupiedSpace < _length)
	{
		++_occupiedSpace;
	}

	if (_overallSize > _length )
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
	--_overallSize;
	int temp = _data[_endPointer];
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
		return _data[_length - 1];
	}

	return _data[(_startPointer - 1)];
}


