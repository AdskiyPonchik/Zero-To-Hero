//
// Created by adskiyponchik on 12.12.23.
//

#ifndef STUDYING_SOURCE4_18_H
#define STUDYING_SOURCE4_18_H

#endif //STUDYING_SOURCE4_18_H
#include <iostream>
void source4_18(){
	using namespace std;
	double* p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << p3 << "\n";
	cout << p3[1] << "\n";
	cout << p3[2] << "\n";
	cout << "p3[1] is " << p3[1] << ".\n";
	p3 += 1;
	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << "\n";
	p3-=1;
	delete [] p3;
}