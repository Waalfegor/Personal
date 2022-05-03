#include "Stack.h"


Stack::Stack(string name, int size) // определение конструктора
{
    this->name = name; // просто записать в нужные поля нужные значения
    this->size = size;
    this->array = new int[size];
    count = 0;
}

bool Stack::input(int element) { // определение метода добавления элемента
    if (count + 1 > size) return false; // если следующий элемент "переполнит" стек, то сразу выходим\
    и возвращаем false
    array[count] = element;
    count++;
    return true;
}

bool Stack::output(int& where) { // определение метода извлечения элемента\
    так как тесты чуствительны к выводу лишних невидимых символов, нельзя просто вывести элемент\
    требуется сохранить его в переменную -> kuda
    if (count - 1 < 0) return false; // если нечего выводить, возвращаем false
    count--;
    where = array[count];
    return true;
}

int Stack::out_count() { // вывод количества
    return this->count;
}
