#include <iostream>

#include "windows.h"

#include "Menu.h"

using namespace std;


int main()
{

	int valueForMenu;

	for (;;)
	{
		cout << "1 - Stack\n"
			<< "2 - Queue with two stacks\n"
			<< "3 - Ring buffer\n"
			<< "4 - Queue ring\n"
			<< "0 Exit\n";
		valueForMenu = GetElementConsole();
		switch (valueForMenu)
		{
		case 1: 
		{
			Stack* stack = new Stack;
			Menu(stack);
			delete stack;
			break;
		}
		case 2:
		{
			QueueTwoStacks* queueTwoStacks = new QueueTwoStacks;
			Menu(queueTwoStacks);
			delete queueTwoStacks;
			break;
		}
		case 3:
		{
			RingBuffer* ringBuffer = new RingBuffer;
			Menu(ringBuffer);
			delete ringBuffer;
			break;
		}
		case 4:
		{
			QueueRing* queueRing = new QueueRing;
			Menu(queueRing);
			delete queueRing;
			break;
		}
		case 0:
		{
			return 0;
		}
		default:
		{
			cout << "Invalid value\n";
			system("pause");
			break;
		}
		}
		system("cls");
	}
}