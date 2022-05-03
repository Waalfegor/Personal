#include "Stack.h"


Stack::Stack(string name, int size) // ����������� ������������
{
    this->name = name; // ������ �������� � ������ ���� ������ ��������
    this->size = size;
    this->array = new int[size];
    count = 0;
}

bool Stack::input(int element) { // ����������� ������ ���������� ��������
    if (count + 1 > size) return false; // ���� ��������� ������� "����������" ����, �� ����� �������\
    � ���������� false
    array[count] = element;
    count++;
    return true;
}

bool Stack::output(int& where) { // ����������� ������ ���������� ��������\
    ��� ��� ����� ������������ � ������ ������ ��������� ��������, ������ ������ ������� �������\
    ��������� ��������� ��� � ���������� -> kuda
    if (count - 1 < 0) return false; // ���� ������ ��������, ���������� false
    count--;
    where = array[count];
    return true;
}

int Stack::out_count() { // ����� ����������
    return this->count;
}
