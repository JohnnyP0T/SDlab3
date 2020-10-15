#ifndef _MENU_H_
#define _MENU_H_

#pragma once

#include "RingBuffer.h"
#include "Stack.h"
#include "QueueTwoStacks.h"
#include "QueueRing.h"

int GetElementConsole();

int Menu(Stack* stack);

int Menu(RingBuffer* ringBuffer);

int Menu(QueueTwoStacks* queueTwoStacks);

int Menu(QueueRing* queueRing);

#endif //_MENU_H_