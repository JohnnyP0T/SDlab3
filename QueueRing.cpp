#include "QueueRing.h"


QueueRing::QueueRing(int length)
{
	_ringBuffer = new RingBuffer(length);
}


QueueRing::~QueueRing()
{
	delete _ringBuffer;
}


void QueueRing::EnQueue(int data)
{
	_ringBuffer->Push(data);
}


int QueueRing::DeQueue()
{
	return _ringBuffer->Pop();
}


int QueueRing::GetTop()
{
	return _ringBuffer->GetTop();
}


int QueueRing::GetFreeQuantity()
{
	return _ringBuffer->GetFreeQuantity();
}


int QueueRing::GetOccupiedQuantity()
{
	return _ringBuffer->GetOccupiedQuantity();
}
