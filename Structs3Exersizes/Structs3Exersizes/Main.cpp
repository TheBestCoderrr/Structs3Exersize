#include <iostream>

#include "Exersize1.h"
#include "Exersize2.h"

using namespace std;

int main() {
	Rectangle rectangle;

	rectangle.znack = '*';
	rectangle.PointRectangle.x = 0;
	rectangle.PointRectangle.y = 0;
	int UserChoice;
	int x, y, height, width;
	cout << "0 - Exit\n1 - move rectangle\n2 - set size rectangle\n3 - print rectangle\n4 - rectangle znack" << endl;

	while (true) {
		cout << "Enter variant: ";
		cin >> UserChoice;

		switch (UserChoice) {
		case 0:
			cout << "Exit!" << endl;
			break;
		case 1:
			cout << "Enter x,y: ";
			cin >> x >> y;
			MoveRectangleXY(rectangle, x, y);
			break;
		case 2:
			cout << "Enter width, height:";
			cin >> width >> height;
			SetSize(rectangle, width, height);
			break;
		case 3:

			PrintRectangle(rectangle);
			break;
		case 4:
			cout << "Enter znack:";
			cin >> rectangle.znack;
			break;
		default:
			cout << "Invalid choice!" << endl;
			break;
		}
		if (UserChoice == 0)
			break;
	}

	Point point1;
	Point point2;

	cout << "Enter Point 1:";
	cin >> point1.x >> point1.y;


	cout << "Enter Point 2:";
	cin >> point2.x >> point2.y;

	cout << "Vidstan = " << FindVidstan(point1, point2) << endl;
}