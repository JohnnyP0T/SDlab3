#include "QueueRing.h"

QueueRing::QueueRing()
{
	_ringBuffer = new RingBuffer;
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

int QueueRing::GetFreeSpace()
{
	return _ringBuffer->GetFreeSpace();
}

int QueueRing::GetOccupiedSpace()
{
	return _ringBuffer->GetOccupiedSpace();
}
