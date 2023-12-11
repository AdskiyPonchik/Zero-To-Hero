#ifndef STUDYING_EXAMPLE_H
#define STUDYING_EXAMPLE_H
#endif //STUDYING_EXAMPLE_H

#include <iostream>

void source4_14() {
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;
	// Can requiring  unsigned(&donuts) and unsigned(&cups)
	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;
}