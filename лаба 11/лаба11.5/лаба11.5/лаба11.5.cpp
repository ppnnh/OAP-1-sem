﻿// лаба11.5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void main()
{
	/*Дан массив x, содержащий k элементов, массив y, содержащий n элементов, и число q.Найти сумму вида x[i] + y[j], наиболее близкую к числу q.*/
	setlocale(LC_ALL, "Rus");
	const int k = 30, j = 40;
	int n, x[k], y[j], d = 0, g = 0, q, U, X, Y;
	cout << "Введите размер массива A (не более 30)" << endl;
	cin >> n;
	cout << "Размер массива A равен " << n << endl;
	cout << "Массив A" << endl;
	for (int f = 0; f < n; f++)
	{
		x[f] = rand() % 45;
	}
	cout << "====================" << endl;
	int* pX = x;
	for (int f = 0; f < n; f++)
	{
		cout << *(pX + f) << endl;
	}
	cout << "====================" << endl;
	cout << "Введите размер массива B (не более 40)" << endl;
	cin >> g;
	cout << "Размер массива B равен " << g << endl;
	cout << "Массив B" << endl;
	for (int f = 0; f < g; f++)
	{
		y[f] = rand() % 45;
	}
	cout << "====================" << endl;
	int* pY = y;
	for (int f = 0; f < g; f++)
	{
		cout << *(pY + f) << endl;
	}
	cout << "====================" << endl;
	cout << "Введите число q" << endl;
	cin >> q;
	U = *(pX)+*(pY);
	for (int f = 0; f < g; f++)
	{
		for (int z = 0; z < n; z++)
		{
			if (abs(*(pX + z) + *(pY + f) - q) <= abs(U - q))
			{
				U = *(pX + z) + *(pY + f);
				X = z;//Присваиваем номер элемента массива X
				Y = f;//Присваиваем номер элемента массива Y
			}
		}
	}
	cout << U << " " << X+1 << " Элемент массива x" << " + " << Y+1 << " Элемент массива Y";
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
