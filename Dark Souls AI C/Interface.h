#ifndef Interface_H
#define Interface_H

#include <stdio.h>

#include <Windows.h>
#include <math.h>

#include "vjoyinterface.h"
#include "public.h"

#define PI 3.14159265
#define XRIGHT 32768
#define XLEFT 1
#define YTOP 1
#define YBOTTOM 32768
#define MIDDLE 16384

int loadvJoy(UINT iInterface);

typedef struct{
	long first;
	long second;
} longTuple;

//this will return a tuple of 2 values each in the range 0x1-0x8000(32768).
//The first is the x direction, which has 1 as leftmost and 32768 as rightmost
//second is y, which has 1 as topmost and 32768 as bottommost
longTuple CoordsToJoystickAngle(float player_x, float phantom_x, float player_y, float phantom_y);

#endif