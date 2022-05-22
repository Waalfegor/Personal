#ifndef DATA_H_
#define DATA_H_

#include <iostream>
#include <vector>

using namespace std;

struct Data
{
private:

	int num;
	int Rows = 10000;
	int Cols = 10000;
	int x = 0, y = 0;
	vector < vector<int> > field{ Rows, vector<int>(Cols, 0) };

public:

	bool check();
	void InN();
	void RowsCols();
	void GetVector();
	void ÑreateTriangle();

};

#endif
