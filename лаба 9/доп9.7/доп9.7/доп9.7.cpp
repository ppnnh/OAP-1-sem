﻿// доп9.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

int main()
{
	using namespace std;
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int N = 100;
	int i, sz, A[N], b[N], c[N], v[N], m = 0, n = 0, n1 = 0, k = 0, z = 0, l = 0;
	int rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = rand() % rmx;
		cout << "[" << i + 1 << "]" << A[i] << endl;
	}
	for (i = 0; i < sz; i++) {
		m = m + A[i];
		k = k + 1;
	}
	z = m / k;
	cout << "Среднее арифметическое массива =" << z;
	cout << endl;
	cout << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] >= z) // присваиваю масиву значения больше арифм
		{
			c[n] = A[i];
			n++;
		}
	}
	cout << endl;
	for (i = 0; i < sz; i++)
	{
		if (A[i] < z)
		{
			b[n1] = A[i]; // присваиваю масиву значения меньше арифм
			n1++;
		}
	}
	for (i = 0; i < n; i++) {
		v[i] = c[i];  // присваиваю 3 масиву первый
	}
	for (i = n; i < n + n1; i++) { // присваиваю 3 масиву второй
		v[i] = b[l];
		l++;
	}
	cout << "Массив:";
	for (i = 0; i < sz; i++)
	{
		cout << v[i] << " ";
	}

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
