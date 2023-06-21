#include <iostream>
#include "Exersize1.h"

using namespace std;

void SetSize(Rectangle& rectangle, int width, int height) {
	rectangle.size.width = width;

	rectangle.size.height = height;
}

void MoveRectangleXY(Rectangle& rectangle, int x, int y) {
	rectangle.PointRectangle.x = x;

	rectangle.PointRectangle.y = y;
}

void PrintRectangle(Rectangle rectangle) {
	for (int i = 0; i < rectangle.PointRectangle.y; i++) {
		cout << endl;
	}
	for (int i = 0; i < rectangle.size.height; i++) {
		for (int j = 0; j < rectangle.PointRectangle.x; j++)
			cout << ' ';
		for (int n = 0; n < rectangle.size.width; n++)
			cout << rectangle.znack;
		cout << endl;
	}
	cout << endl;
}