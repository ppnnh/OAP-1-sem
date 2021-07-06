﻿// лаба9.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 100;
	int i, sz, A[N];
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		cout << A[i] << endl;
	}
	double o;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		o = A[i] % 7;
		if (o == 0)
		{
			for (int j = i; j <= sz; j++)
				A[j] = A[j + 1]; sz--;
		}
	}
	cout << "Массив после удаления элементов" << endl;

	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl << endl << endl << endl;


	i = 0;
	while (i < sz)
	{
		if (A[i] % 2 == 1)
		{
			for (j = sz; j > i; j--)
				A[j] = A[j - 1];
			sz++;
			A[i + 1] = 4;
		}
		i++;
	}

	cout << "Массив после добавления элемента со значением 4 после каждого нечетного элемента: " << endl;
	for (i = 0; i < sz; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
	cout << endl << endl << endl << endl;

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
