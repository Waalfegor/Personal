#include <iostream>
#include <ctime>

/////// строки
extern const int Rows = 5;
/////// колонки
extern const int Cols = 5;

using namespace std;

bool check()
{
    if (!cin)
    {
        cout << "\nInput error";
        return false;
    }
    return true;
}

void RandFill(int a[][Cols], int Rows)
{
    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++) a[i][j] = rand() % 10 + 1;
}

void input(int a[][Cols], int Rows)
{
    int inputnum;
    for (int i = 0; i < Cols; i++)
        for (int j = 0; j < Cols; j++) 
        {
            cin >> inputnum;
            if (check()) a[i][j] = inputnum;
            else return;
        } 
}

void Output(int a[][Cols], int Rows)
{
    for (int i = 0; i < Cols; i++) {
        for (int j = 0; j < Rows; j++) {
             cout << "\t" << a[i][j];
            if (j == Cols - 1) cout <<"\n";
        }
    }
}

int MinNum(int a[][Cols], int Rows)
{
    int min = a[1][0];
    for (int i = 0; i < Rows; i++)
    {
        for (int j = 0; j != i; j++)
        {
            if (a[i][j] < min) min = a[i][j];
        }
    }
    return min;
}


int main(void) {
    srand(time(NULL));
    int a[Rows][Cols];
    RandFill(a, Rows);
    Output(a, Rows);
    cout << "\nMinimum number under the main diagonal: " << MinNum(a, Rows) << endl;
    input(a, Rows);
    cout << "\nMinimum number under the main diagonal: " << MinNum(a, Rows) << endl;
}