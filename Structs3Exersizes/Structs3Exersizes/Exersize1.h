#pragma once

struct Point {
	int x;
	int y;
};

struct RectangleSize {
	int width;
	int height;
};

struct Rectangle {
	char znack;
	Point PointRectangle;
	RectangleSize size;
};

void SetSize(Rectangle& rectangle, int width, int height);

void MoveRectangleXY(Rectangle& rectangle, int x, int y);

void PrintRectangle(Rectangle rectangle);
