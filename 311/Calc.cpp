#include <iostream>
#include "Calc.h"

using namespace std;

void Calc::GetRez()
{
	cout << rez << endl;
}

char Calc::GetOP()
{
	return op;
}

void Calc::SetA_OP_B()
{
	cin >> a >> op >> b;
}

void Calc::Operation()
{
	SetA_OP_B();
	if (op == '+') rez = a + b;
	else if (op == '-') rez = a - b;
	else if (op == '*') rez = a * b;
	else if (op == '%') rez = a % b;
}

void Calc::InOp(int rez, char op, int b)
{
	if (op == '+') this->rez = rez + b;
	else if (op == '-') this->rez = rez - b;
	else if (op == '*') this->rez = rez * b;
	else if (op == '%') this->rez = rez % b;
}

void Calc::NextOperation()
{
	cin >> op;
	if (op != 'C')
	{
		cin >> b;
		InOp(rez, op, b);
	}
}