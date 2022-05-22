#include "Data.h"

bool Data::check() // проверка на ввод
{
	if (!cin)
	{
		cout << "\nInput error";
		return false;
	}
	return true;
}

void Data::InN()
{
	cout << "Enter n:\n";
	cin >> num;
	cout << "\n";
}

void Data::RowsCols()
{
	Rows = 2 + 4 * (num - 1);
	Cols = 2 + 2 * (num - 1);
}

void Data::GetVector()
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << field[i][j] << " ";
		}
		cout << "\n";
	}
}

void Data::СreateTriangle()
{	
	RowsCols();
	for (int i = 1; i < num + 1; i++)
	{
		field[x + 4 * (i - 1)][y + 2 * (i - 1)] = 1;
		field[(x + 1) + 4 * (i - 1)][y + 2 * (i - 1)] = 1;
		field[(x + 1) + 4 * (i - 1)][(y + 1) + 2 * (i - 1)] = 1;
	}
	field.shrink_to_fit();
}

