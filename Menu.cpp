#include<iostream>

#include "Menu.h"
#include "Stack.h"
#include "RingBuffer.h"
#include "QueueTwoStacks.h"

using namespace std;

int GetElementConsole()
{
	int taxableIncome;
	for (;;) {
		if (cin >> taxableIncome)
		{
			return taxableIncome;
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(80, '\n');
		}
	}
}

void Menu(Stack *stack)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		if (valueForPrint)
		{
			cout << endl;
		}
		cout << "+=================== Stack ===================+" << endl;
		cout << "Size = " << stack->GetLength() << endl;
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
				cout << stack->Pop() << endl;

			}
			catch (const char* error)
			{
				cout << error;
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
			catch (const char* error)
			{
				cout << error;
				system("pause");
				break;
			}
			system("pause");
			break;
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


void Menu(RingBuffer* ringBuffer)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		if (valueForPrint)
		{
			cout << endl;
		}
		cout << "+=================== Ring buffer ===================+" << endl;
		cout << "Free space = " << ringBuffer->GetFreeSpace() << endl;
		cout << "Occupied space = " << ringBuffer->GetOccupiedSpace() << endl;
		cout << "1 - Pop \n";
		cout << "2 - Push \n";
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
			catch (const char* error)
			{
				cout << error;
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


void Menu(QueueTwoStacks* queueTwoStacks)
{
	int count = 0;
	bool valueForPrint = 0;
	int valueForMenu = 0;
	for (;;) {
		if (valueForPrint)
		{
			cout << endl;
		}
		cout << "+=================== Queue with two stacks ===================+" << endl;
		cout << "Size = " << queueTwoStacks->GetLength() << endl;
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
				cout << queueTwoStacks->DeQueue() << endl;
			}
			catch (const char* error)
			{
				cout << error;
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
			queueTwoStacks->EnQueue(valueForMenu);
			break;
		}
		case 3:
		{
			try
			{
				cout << queueTwoStacks->GetTop() << endl;
			}
			catch (const char* error)
			{
				cout << error;
				system("pause");
				break;
			}
			system("pause");
			break;
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