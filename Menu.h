#pragma once

#ifndef _MENU_H_
#define _MENU_H_


#include "RingBuffer.h"
#include "Stack.h"
#include "QueueTwoStacks.h"
#include "QueueRing.h"

/// @brief get elementconsole
/// @return 
int GetElementConsole();

int Menu(Stack* stack);

int Menu(RingBuffer* ringBuffer);

int Menu(QueueTwoStacks* queueTwoStacks);

int Menu(QueueRing* queueRing);

#endif //_MENU_H_