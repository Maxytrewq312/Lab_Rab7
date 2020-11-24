// Задание_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int a[10][10], n, m;
    double o, s = 0, b = 0;
    cout << "Введите количество строк: " << endl;
    cin >> n;
    cout << "Введите количество столбцов: " << endl;
    cin >> m;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++) // задаем цикл для ввоа значений двумерного массива
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] % 2 == 0) // ищем все четные числа и суммируем их
            {
                s += a[i][j];
                b++;
            }
        }
    cout << "Матрица:\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
    o = s / b; // высчитываем среднее арфиметическое четных чисел
    cout << "Среднее арифметическое четных элементов массива = " << o << "\n";
    system("pause");
}

