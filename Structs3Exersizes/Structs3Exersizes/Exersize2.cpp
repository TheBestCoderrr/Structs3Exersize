#include <math.h>
#include "StructPoint.h"

int FindVidstan(Point point1, Point point2) {
	int result = sqrt(pow(point2.x - point1.x, 2) + pow(point2.y - point1.y, 2));
	return result;
}