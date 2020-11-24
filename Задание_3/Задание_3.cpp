// Задание_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    setlocale(0, "ru");
    int a[10][10], x, b;
    cout << "Введите количество строк и столбцов в квадратной матрице: " << endl;
    cin >> x;
    b = x;
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
    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        sum += a[i][i];
    }
    cout << "Сумма элементов главной диагонали = " << sum << "\n";
    system("pause");
}


