#include "cl.h"
#include <iostream>
using namespace std;
cl1::cl1(int a) {
	A = a;
}
void cl2::input(int b, int c) {
	this->b = b;
	this->c = c;
}
int max(cl1& ob1, cl2& ob2) {
	if (ob2.b > ob2.c && ob2.b > ob1.A) {
		cout << "max = " << ob2.b;
	}
	else if (ob2.c > ob2.b && ob2.c > ob1.A) {
		cout << "max = " << ob2.c;
	}
	else
		cout << "max = " << ob1.A;
	return 0;
}