#ifndef STUDYING_SOURCE4_15_H
#define STUDYING_SOURCE4_15_H
#endif //STUDYING_SOURCE4_15_H

#include <iostream>

void source4_15() {
	using namespace std;;
	int updates = 6;
	int *p_updates;
	p_updates = &updates;
	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	// This block out the same code
	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
}