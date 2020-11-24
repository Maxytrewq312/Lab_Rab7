// Задание_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int a[10][10], x, b;
    cout << "Введите количество строк: " << endl;
    cin >> x;
    cout << "Введите количество столбцов: " << endl;
    cin >> b;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < x; i++)
        for (int j = 0; j < b; j++)
        {
            cin >> a[i][j];
        }
    cout << "Матрица:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < b; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    cout << "Введите число, по отношению к которому нужно будет заменить элементы меньше этого этим числом: ";
    int o;
    cin >> o;
    for (int i = 0; i < x; i++) // ищем все числа, меньше заданного
    {
        for (int j = 0; j < b; j++)
        {
            if (a[i][j] < o)
            {
                a[i][j] = o;
            }
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    system("pause");
}

