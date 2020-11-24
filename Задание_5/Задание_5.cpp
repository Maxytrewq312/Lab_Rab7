// Задание_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
    cout << "Подсчитываем количество нечетных элементов...\n";
    int h = 0;
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < b; j++) // находим нечетные элементы и считаем их
            if (a[i][j] % 2 == 1)
            {
                h++;
                sum += a[i][j]; // высчитываем сумму нечетных элементов
            }
    }
    cout << "Нечетных элементов = " << h << "\n" << "Их сумма = " << sum << "\n";
    system("pause");
}

