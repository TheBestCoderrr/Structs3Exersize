#pragma once
#include "StructPoint.h"

struct RectangleSize {
	int width;
	int height;
};

struct Rectangle {
	char znack;
	Point PointRectangle;
	RectangleSize size;
};