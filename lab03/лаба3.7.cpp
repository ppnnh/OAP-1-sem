﻿// лаба3.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	char c, pr; pr = ' ';
	using namespace std;
	cout << "Введите символ = "; cin >> c;
	cout << endl;
	cout << setw(3) << setfill(pr) << pr;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(pr) << pr;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(3) << setfill(pr) << pr;
	cout << setw(5) << setfill(c) << c << endl;
	int s, n;
	cout << "Введите диагональ квадрата = "; cin >> n;
	s = pow(n,2)/2;
	cout << "S = " << s << endl;
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
