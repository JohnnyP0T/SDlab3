#include "QueueTwoStacks.h"


QueueTwoStacks::QueueTwoStacks()
{
	stackFirst = new Stack;
	stackSecond = new Stack;
}


QueueTwoStacks::~QueueTwoStacks()
{
	delete stackFirst;
	delete stackSecond;
}


void QueueTwoStacks::Enqueue(int data)
{
	stackFirst->Push(data);
}


int QueueTwoStacks::Dequeue()
{
	if (stackSecond->IsEmpty())
	{
		while (!stackFirst->IsEmpty())
		{
			stackSecond->Push(stackFirst->Pop());
		}
	}

	return stackSecond->Pop();
}


int QueueTwoStacks::GetLength()
{
	return (stackFirst->GetLength() + stackSecond->GetLength());
}


int QueueTwoStacks::GetTop()
{
	if (stackFirst->IsEmpty())
	{
		return stackSecond->GetTop();
	}

	return stackFirst->GetTop();
}
