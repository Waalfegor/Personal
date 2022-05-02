#ifndef CALC_H_
#define CALC_H_

#include <iostream>
using namespace std;

class Calc
{

private:

	int a, b, rez;
	char op;

	void InOp(int rez, char op, int b);

public:

	void GetRez();
	char GetOP();
	void SetA_OP_B();
	void Operation(); 
	void NextOperation();
};

#endif 