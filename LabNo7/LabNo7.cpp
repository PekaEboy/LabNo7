﻿// LabNo7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
using namespace std;
int Beta(int i, int a[], int n) {
    int j = 1;
    while (j <= i/2) {
        j = j * 2;
    }
    int p = n / j;
    int kp = (i % j + i / j) * p;
    int kn = (i % j + i / j - 1) * p;
    int k = kn;
    if (n == 1) {
        return a[k];
    }
    else {
        return a[k] + Beta(i, a, kp);

    }
}

int Alpha(int a[]) {
    return a[2];
}
int main()
{
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите степень двойки: ";
    cin >> a;

    int n = (int)pow(2, a);
    cout << "Длина массива а: " << n << endl;
    int A[100];
    cout << "Введите массив: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int h = 1;
    for (int i = 1; i < 4; i++) {
        cout << Beta(i, A, n);
    }
    cout << endl;
    system("pause");
    return 0;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
