#include "Data.h"

bool check0()
{
	if (!cin)
	{
		cout << "\nInput error";
		return false;
	}
	return true;
}

int main() 
{
	
	Data dat;
	dat.InN();
	if (dat.check())
	{
		dat.СreateTriangle();
		dat.GetVector();
	}
	return 0;
}