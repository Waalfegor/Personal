#include <iostream>
#include <ctime>

/////// строки
extern const int Rows = 3;
/////// колонки
extern const int Cols = 3;

using namespace std;

bool check() // проверка на ввод
{
    if (!cin)
    {
        cout << "\nInput error";
        return false;
    }
    return true;
}

void RandFill(int a[][Cols], int Rows, int Cols) // рандомное заполнение матрицы
{
    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++) a[i][j] = rand() % 10 + 1;
}

bool input(int a[][Cols], int Rows, int Cols) // заполонение матрицы с клавиатуры
{
    int inputnum;
    for (int i = 0; i < Rows; i++)
        for (int j = 0; j < Cols; j++)
        {
            cin >> inputnum;
            if (check()) a[i][j] = inputnum;
            else return false;
        }
}

void Output(int a[][Cols], int Rows, int Cols) // вывод матрицы
{
    for (int i = 0; i < Rows; i++) {
        for (int j = 0; j < Cols; j++) {
            cout << "\t" << a[i][j];
            if (j == Cols - 1) cout << "\n";
        }
    }
}

int MinNum(int a[][Cols], int Rows,int Cols) // поиск минимального значения под главной диагональю
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
    srand(time(NULL));// для постоянной генерации различных рандомных чисел
    int a[Rows][Cols];
    RandFill(a, Rows, Cols);
    Output(a, Rows, Cols);
    cout << "\nMinimum number under the main diagonal: " << MinNum(a, Rows, Cols) << endl;
    if (input(a, Rows, Cols))
    {
        cout << "\n";
        Output(a, Rows, Cols);
        cout << "\nMinimum number under the main diagonal: " << MinNum(a, Rows, Cols) << endl;
    }
}
