// доп13.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
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



//Доп 7. Дана действительная матрица A(N, N) . Найти сумму  и  мах  значение  среди элементов, расположенных в заштрихован-ной части матрицы.

int main()
{
    setlocale(LC_CTYPE, "Russian");
    const int SIZE = 7;
    int A[SIZE][SIZE];
    int i, j;
    int nad, pod, k, p, sum, max;
    srand((unsigned)time(NULL));
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            A[i][j] = rand() % 10;
        }

    }
    for (i = 0; i < SIZE; ++i)
    {
        for (j = 0; j < SIZE; ++j)
        {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    k = 0; nad = 0; p = SIZE; max = 0;
    cout << " сумма верхней части";
    for (i = 0; i < SIZE; i++)
    {
        for (j = k; j < SIZE; j++)
        {
            nad = nad + A[i][j];
            if (A[i][j] > max)
            {
                max = A[i][j];
            }

        }
        k++;
        p--;
    }
    cout << nad << endl;
    k = SIZE; pod = 0; p = 0;
    cout << " сумма нижней части";
    for (i = 0; i < SIZE; i++)
    {
        for (j = k; j > p; j--)
        {
            pod = pod + A[i][j];
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
        k--;
        p++;
    }
    cout << pod << endl;
    sum = pod + nad - A[SIZE / 2][SIZE / 2];
    cout << "сумма заштрихованной части:";
    cout << sum << endl;
    cout << "максимум:";
    cout << max;
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
