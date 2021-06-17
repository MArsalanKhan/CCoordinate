#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

#include "CCoordinate.h"

bool floatEqual (float a, float b) {
	return b - 0.00001 < a && a < b + 0.00001;
}

int main (void)
{
	CCoordinate c1(2,3);
	if (c1.getX() != 2) {
		cout << "Error in getX()" << endl;
	}
	if (c1.getY() != 3) {
		cout << "Error in getY()" << endl;
	}

	CCoordinate c2(1,1);
	if (!floatEqual(c2.getRadius(), sqrt(2))) {
		cout << "Error in getRadius()" << endl;
	}
	if (!floatEqual(c2.getAngle(), 2*M_PI * 45/360)) {
		cout << "Error in getAngle()" << endl;
	}

	c2.setPolar(sqrt(2), 2*M_PI * 45/360);
	if (!floatEqual(c2.getX(), 1) || !floatEqual(c2.getY(), 1)) {
		cout << "Error in setPolar()" << endl;
	}

	return 0;
}
