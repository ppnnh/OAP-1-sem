﻿// лаба11.14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
void main()
{
	//Даны два массива x и y.Найти количество одинаковых элементов в этих массивах, т.е.количество пар x[i] = y[j] для некоторых i и j.
	setlocale(LC_ALL, "Rus");
	const int i = 30, j = 40;
	int n, x[i], y[j], g, schetchik = 0;
	cout << "Введите размер массива (не более 30)" << endl;
	cin >> n;
	cout << "Введите размер массива (не более 40)" << endl;
	cin >> g;

	//Заполняем массив X
	for (int f = 0; f < n; f++)
	{
		x[f] = rand() % 7;
		cout << x[f] << endl;
	}
	cout << "====================" << endl;
	int* px = x;
	for (int f = 0; f < n; f++)
	{
		cout << *(px + f) << endl;
	}
	cout << "====================" << endl;

	//Заполняем массив Y
	for (int f = 0; f < g; f++)
	{
		y[f] = rand() % 7;
		cout << y[f] << endl;
	}
	cout << "====================" << endl;
	int* py = y;
	for (int f = 0; f < g; f++)
	{
		cout << *(py + f) << endl;
	}
	cout << "====================" << endl;
	for (int z = 0; z < n; z++)//Массив X 
	{
		for (int f = 0; f < g; f++)//Массив Y
		{
			if (*(px + z) == *(py + f))
			{
				schetchik = schetchik + 1;
				cout << z + 1 << "Элемент массива X равен " << f+1 << "элементу массива Y" << endl;
			}
		}
	}
	cout << "Количество пар элементов = " << schetchik;
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
