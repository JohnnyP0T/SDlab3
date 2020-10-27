#include <iostream>
#include <string>
#include <exception>

#include "Menu.h"
#include "Stack.h"
#include "RingBuffer.h"
#include "QueueTwoStacks.h"

using namespace std;



int GetElementConsole()
{
	while (true)
	{
		string inputValue;
		int number;
		size_t length;
		getline(cin, inputValue);

		try
		{
			number = stoi(inputValue, &length);

			if (length == inputValue.length())
			{
				return number;
			}
		}
		catch (exception) 
		{
			cout << "Error exception\n";
		}

		cout << inputValue << " is not a number" << endl;
	}
}

int Menu(Stack *stack)
{
	int count = 0;
	bool valueForPrint = false;
	int valueForMenu = 0;
	for (;;) {
		cout << "+=================== Stack ===================+" << endl
			<< "Size = " << stack->GetLength() << endl
			<< "1 - Pop \n"
			<< "2 - Push \n"
			<< "3 - get top \n"
			<< " =++=  0 - Exit  =++=" << endl
			<< "Enter operation: ";
		count = GetElementConsole();
		cout << endl;
		switch (count)
		{
			case 1:
			{
				try
				{
					cout << stack->Pop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
				break;
			}
			case 2:
			{
				cout << "Enter integer value\n";
				valueForMenu = GetElementConsole();
				stack->Push(valueForMenu);
				break;
			}
			case 3:
			{
				try
				{
					cout << stack->GetTop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
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


int Menu(RingBuffer* ringBuffer)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		cout << "+=================== Ring buffer ===================+" << endl;
		cout << "Free space = " << ringBuffer->GetFreeQuantity() << endl;
		cout << "Occupied space = " << ringBuffer->GetOccupiedQuantity() << endl;
		cout << "1 - Pop \n";
		cout << "2 - Push \n";
		cout << "3 - get top \n";
		cout << " =++=  0 - Exit  =++=" << endl;
		cout << "Enter operation: ";
		count = GetElementConsole();
		cout << endl;
		switch (count)
		{
			case 1:
			{
				try
				{
					cout << ringBuffer->Pop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
				break;
			}
			case 2:
			{
				cout << "Enter integer value\n";
				valueForMenu = GetElementConsole();
				ringBuffer->Push(valueForMenu);
				break;
			}
			case 3:
			{
				try
				{
					cout << ringBuffer->GetTop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
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


int Menu(QueueTwoStacks* queueTwoStacks)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		cout << "+=================== Queue with two stacks ===================+" << endl;
		cout << "Size = " << queueTwoStacks->GetLength() << endl;
		cout << "1 - DeQueue \n";
		cout << "2 - Enqueue \n";
		cout << "3 - get top \n";
		cout << " =++=  0 - Exit  =++=" << endl;
		cout << "Enter operation: ";
		count = GetElementConsole();
		cout << endl;
		switch (count)
		{
			case 1:
			{
				try
				{
					cout << queueTwoStacks->Dequeue() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
				break;
			}
			case 2:
			{
				cout << "Enter integer value\n";
				valueForMenu = GetElementConsole();
				queueTwoStacks->Enqueue(valueForMenu);
				break;
			}
			case 3:
			{
				try
				{
					cout << queueTwoStacks->GetTop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
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


int Menu(QueueRing* queueRing)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		cout << "+=================== Ring Queue ===================+" << endl;
		cout << "Free space = " << queueRing->GetFreeQuantity() << endl;
		cout << "Occupied space = " << queueRing->GetOccupiedQuantity() << endl;
		cout << "1 - DeQueue \n";
		cout << "2 - EnQueue \n";
		cout << "3 - get top \n";
		cout << " =++=  0 - Exit  =++=" << endl;
		cout << "Enter operation: ";
		count = GetElementConsole();
		cout << endl;
		switch (count)
		{
			case 1:
			{
				try
				{
					cout << queueRing->Dequeue() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
				break;
			}
			case 2:
			{
				cout << "Enter integer value\n";
				valueForMenu = GetElementConsole();
				queueRing->Enqueue(valueForMenu);
				break;
			}
			case 3:
			{
				try
				{
					cout << queueRing->GetTop() << endl;
				}
				catch (std::exception error)
				{
					cout << error.what();
					system("pause");
					break;
				}
				system("pause");
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
