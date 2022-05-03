#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	int temp = 0;
	Calc calcul;
	calcul.Operation();
	while (true)
	{
		temp++;
		if (calcul.GetOP() == 'C') break;
		calcul.NextOperation();
		if (temp % 3 == 0) calcul.GetRez();
	}
}
