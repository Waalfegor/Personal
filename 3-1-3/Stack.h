#ifndef STACK_H
#define STACK_N

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Stack // создаем класс стаков
{
public: // объявляем публичные поля и методы
    string name; // сюда мы положим имя стека
    int size;
    Stack(string name, int size);
    bool input(int element); // метод добавления елемента
    bool output(int& where); // извлечения
    int out_count(); // получения количества всех элементов стека
private: // объявляем приватные поля

    int* array;
    int count;
};
#endif