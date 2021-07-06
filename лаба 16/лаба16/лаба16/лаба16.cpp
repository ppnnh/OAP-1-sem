// лаба16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

void Matrix();
int Minimum(int N, int First, ...);
double Minimum(double N, double First, ...);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Change = 0;
	do {
		cout << "Выберите номер задания: " << endl;
		cout << "1 - Найти положительную строку и сумму элементов этой строки" << endl;
		cout << "2 - Найти минимум в заданной последовательности" << endl;
		cin >> Change;
		switch (Change)
		{
		case 1: Matrix(); break;
		case 2: cout << Minimum(3, 1, 2, 7) << endl; break;
		case 3: break;
		default: cout << "Введите число от 1 до 3";
		}
	} while (Change != 3);
	return 0;
}

void Matrix()
{
	short Rows = 0, Columns = 0;
	cout << "Введите кол-во строчек и кол-во столбцов: " << endl;
	cin >> Rows >> Columns;
	// создание и заполнение массива
	short* Matrix = new short[Rows * Columns];
	srand((unsigned)time(NULL));
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Matrix + i * Columns + j) = rand() % 6 - 3;
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	// поиск положительной строки
	short Flag = 0, Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (*(Matrix + i * Columns + j) > 0)
				Flag++;
		}
		if (Flag == Rows) {
			Flag = i;
			for (short i = 0; i < Columns; i++)
			{
				Sum += *(Matrix + Flag * Columns + i);
			}
			break;
		}
		else
			Flag = 0;
	}
	if (Sum != 0)
	{
		cout << "Сумма элементов: " << Sum << endl;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Columns; j++)
			{
				*(Matrix + i * Columns + j) -= Sum;
			}
		}
	}
	else
		cout << "Положительная строка не найдена" << endl;
	// вывод
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int Minimum(int N, int First, ...)
{
	int* p = &First;
	int Min = *p;
	while (N)
	{
		if (Min > * (++p))
			Min = *p;
		N--;
	}
	return Min;
}

double Minimum(double N, double First, ...)
{
	double* p = &First;
	double Min = *p;
	while (N)
	{
		if (Min > * (++p))
			Min = *p;
		N--;
	}
	return Min;
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
