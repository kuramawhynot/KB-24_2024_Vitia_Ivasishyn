#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите 2 числа:\n ";
    cin >> a >> b;

    cout << "Выберите математическое действие: " <<
        "\n1. Сложение" <<
        " \n2. Вычетание" <<
        " \n3. Деление" <<
        " \n4. Умножение\n ";
    cin >> c;
    switch (c)
    {
    case 1:
        cout <<"Результат сложения: "<< a + b<<endl;
        break;
    case 2:
        cout <<"Результат вычетания: "<< a - b<<endl;
        break;
    case 3:
        cout <<"Результат деления: "<<(double)a / b<<endl;
        break;
    case 4:
        cout <<"Результат умножения: "<< a * b<<endl;
        break;
    default:
        cout << "Ошибка! Пункт Меню отсудствует!"<<endl;
        break;
}
}
