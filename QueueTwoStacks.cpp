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


void QueueTwoStacks::EnQueue(int data)
{
	stackFirst->Push(data);
}


int QueueTwoStacks::DeQueue()
{
	if (stackSecond->IsEmpty() == true)
	{
		while (stackFirst->IsEmpty() == false)
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
