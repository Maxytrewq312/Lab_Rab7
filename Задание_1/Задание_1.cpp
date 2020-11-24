// Задание_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "");
    int n, max, ** a, i, j;
    cout << "Введите количество столбцов:";
    cin >> n;
    a = new int* [n];
    for (i = 0; i < n; i++)
        a[i] = new int[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a[i][j] = rand() % 100; // задаем рандомный двумерный массив с заданым количеством строк
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    max = a[0][0]; // присваиваем перемнной максимума самое первое значение двумерного массива
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j]; // находим максимальный элемент массива
            }
        }
    }
    cout << "\nМаксимальное число массива: " << max << endl;
    system("pause");

}
