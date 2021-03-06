// доп13.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <ctime>
#include <iomanip> 
using namespace std;

void Check(int row, int ctr) {
	int A[5][5] = { 1,2,3,4,5,
				2,1,0,8,1,
				3,0,0,9,0,
				4,8,9,3,7,
				5,0,1,7,0 };
	int j = 0;
	for (int i = row, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			ctr++;
		}
	}
	if (ctr == 6) cout << row << "-ая строка совпадает с " << row << "-ым столбцом.\n";
}






//Доп  3.	Для заданной матрицы размером 6 на 6 найти такие значения k, что k-я строка матрицы совпадает с k-м столбцом.
//			Найти сумму элементов в тех строках, которые содержат хотя бы один отрицательный элемент.

int main()
{
	setlocale(LC_ALL, "ru");
	int n, m, sum = 0, i = 0, j = 0, k1 = 1, k2 = 1, k3 = 1, k4 = 1, k5 = 1, k6 = 1;
	int A[5][5] = { 1,2,3,4,5,
					2,1,0,8,1,
					3,0,0,9,0,
					4,8,9,3,7,
					5,0,1,7,0 };

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << endl;
	}

	for (i = 0, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k1++;
		}
	}
	if (k1 == 6) cout << "1-ая строка совпадает с 1-ым столбцом.\n";
	for (i = 1, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k2++;
		}
	}
	if (k2 == 6) cout << "2-ая строка совпадает со 2-ым столбцом.\n";
	for (i = 2, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k3++;
		}
	}
	if (k3 == 6) cout << "3-я строка совпадает с 3-им столбцом.\n";
	for (i = 3, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k4++;
		}
	}
	if (k4 == 6) cout << "4-ая строка совпадает с 4-ым столбцом.\n";
	for (i = 4, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k5++;
		}
	}
	if (k5 == 6) cout << "5-ая строка совпадает с 5-ым столбцом.\n";
	for (i = 5, j = 0; j < 5; j++)
	{
		if (A[i][j] == A[j][i]) {
			k6++;
		}
	}
	if (k6 == 6) cout << "6-ая строка совпадает с 6-ым столбцом.\n";
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
