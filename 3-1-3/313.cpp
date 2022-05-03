#include "Stack.h"


int main(int argc, char* argv[]) { // дальше всё по условию: \
        1. Ввести имя и размер для первого стека. \
        2. Создать объект первого стека. \
        3. Ввести имя и размер для второго стека. \
        4. Создать объект второго стека. \
        5. В цикле : \
        5.1.Считывать очередное значение элемента. \
        5.2.Добавлять элементы в оба стека. \
        5.3.При переполнении одного из них, завершить цикл. \
        6. Построчно вывести содержимое стеков.
    string name;
    int size;
    cin >> name >> size; // 1

    Stack stack1 = Stack(name, size); // 2

    cin >> name >> size; // 3

    Stack stack2 = Stack(name, size); // 4

    int element;
    if (stack1.size > stack2.size) stack1.size = stack2.size;
    do { // 5
        cin >> element; // 5.1
    } while (stack1.input(element) && stack2.input(element)); // 5.2, 5.3

    cout << setw(15) << left << stack1.name << setw(15) << left << stack2.name; // это чисто по форме вывода


    int element1, element2;
    stack1.output(element1); // 6 \
    дальше заморочки идут только для того, чтобы не выводились \
    лишние символы пробела, перевода строки и возврата каретки
    while (true)
    {
        cout << endl;
        if (stack2.output(element2)) {
            cout << setw(15) << right << element1;
        }
        else {
            cout << setw(15) << right << element1;
            break;
        }
        if (stack1.output(element1)) {
            cout << setw(15) << right << element2;
        }
        else {
            cout << setw(15) << right << element2;
            break;
        }
    }
    return 0;
}
