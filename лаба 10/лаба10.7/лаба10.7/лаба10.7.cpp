// лаба10.7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

//1.	Извлечь 4 бита числа A, начиная с пятого, и добавить их к числу B справа.//
void zad3() {
	setlocale(LC_CTYPE, "Russian");
	char tmp[33];
	int A, B, maskA, maskB;
	int n, m;
	cout << "Первое число="; cin >> A;
	cout << "Второе число="; cin >> B;
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s(pow(2, 5) - 1, tmp, 2);
	cout << tmp << endl;
	maskA = pow(2, 4) - 1;//1<<5 =10000=01111
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;
	maskA = maskA << (5);//111100000
	_itoa_s(maskA, tmp, 2);
	cout << tmp << endl;//+
	_itoa_s(A & maskA, tmp, 2); // 
	cout << "Маска А" << endl;
	cout << tmp << endl;
	maskB = 15;
	maskB = ~maskB;
	_itoa_s(B & maskB, tmp, 2);
	cout << "Маска B" << endl;
	cout << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 5)), tmp, 2);//10011100 0001 =10011101
	cout << "В с изменнёнными битами" << tmp;
}
//2.	Установить в 1 в числе А n битов влево от позиции p, заменить ими m битов числа В, начиная с пози-ции q.//
void zad4() {
	setlocale(LC_ALL, "ru");
	char tmp[33];
	int A, B, p, n, mask;
	cout << "ВВедите А: " << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	cout << "ВВедите n:" << endl;
	cin >> n;
	cout << "ВВедите p:" << endl;
	cin >> p;
	_itoa_s(pow(2, p) - 1, tmp, 2);
	cout << tmp << endl;
	int a = pow(2, p) - 1;
	a = a >> (p - n) << (p - n);
	_itoa_s(a, tmp, 2);
	cout << tmp << endl;
	_itoa_s(A | a, tmp, 2);
	cout << tmp << endl;
	int q;
	cout << "ВВедите q"; cin >> q;
	cout << "ВВедите B"; cin >> B;
	_itoa_s(B, tmp, 2);
	cout << tmp;
	_itoa_s(A & a, tmp, 2);
	cout << tmp << endl;
	int b = 15;
	b = ~b;
	_itoa_s(B & b, tmp, 2);
	cout << "Маска B" << endl;
	cout << tmp << endl;
	_itoa_s(((B & b) | ((A & a) >> 5)), tmp, 2);//10011100 0001 =10011101
	cout << "В с изменнёнными битами" << tmp;



}
void main()
{
	zad3();
	zad4();
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
