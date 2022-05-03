#ifndef STACK_H
#define STACK_N

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Stack // ������� ����� ������
{
public: // ��������� ��������� ���� � ������
    string name; // ���� �� ������� ��� �����
    int size;
    Stack(string name, int size);
    bool input(int element); // ����� ���������� ��������
    bool output(int& where); // ����������
    int out_count(); // ��������� ���������� ���� ��������� �����
private: // ��������� ��������� ����

    int* array;
    int count;
};
#endif