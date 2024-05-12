// lab11(1)_Габестро.cpp.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "ukr");
    
    char a, b;
    char* ptr_a, * ptr_b;

    cout << "Введіть значення змінної a: ";
    cin >> a;
    cout << "Введіть значення змінної b: ";
    cin >> b;

    ptr_a = &a;
    ptr_b = &b;

    // Змінюємо значення змінної a через покажчик
    *ptr_a = 'X';

    // Міняємо місцями значення змінних a і b через їх покажчики
    char temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    cout << "Нове значення змінної a: " << a << endl;
    cout << "Нове значення змінної b: " << b << endl;

    return 0;
}