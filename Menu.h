#ifndef _MENU_H_
#define _MENU_H_

#pragma once

#include "RingBuffer.h"
#include "Stack.h"
#include "QueueTwoStacks.h"

int GetElementConsole();

void Menu(Stack* stack);

void Menu(RingBuffer* ringBuffer);

void Menu(QueueTwoStacks* queueTwoStacks);

#endif