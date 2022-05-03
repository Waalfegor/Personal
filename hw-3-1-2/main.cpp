#include <iostream>
#include "cl.h"
using namespace std;
int main() 
{
	int a = 0, b = 0, c = 0;
	cin >> a;
	cl1 ob1(a);
	cin >> b >> c;
	cl2 ob2;
	ob2.input(b, c);
	max(ob1, ob2);
}