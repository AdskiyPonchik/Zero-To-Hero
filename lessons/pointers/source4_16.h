
#ifndef STUDYING_SOURCE4_16_H
#define STUDYING_SOURCE4_16_H
#endif //STUDYING_SOURCE4_16_H

#define newline '\n'

#include <iostream>

void source4_16() {
	using namespace std;
	int higgens = 5;
	int *pt = &higgens;
	cout << "Value of higgens = " << higgens << newline;
	cout << "Address of higgens = " << &higgens << newline;
	cout << "Value of *pt = " << *pt << newline;
	cout << "Value of pt = " << pt << newline;
}