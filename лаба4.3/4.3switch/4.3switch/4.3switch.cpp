﻿// 4.3switch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы хотите купить косметику? (1-да, 2-нет)");
	std::cin >> k;
	switch (k)
	{
	case 1: { puts("Какой фирмы? (1-Dior, 2-Maybelline, 3-Belor Design)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("Perfect"); break;
		case 2: puts("Good"); break;
		case 3: puts("Not good");
			break;
		}
		break;
	}
	case 2: puts("Натуральная красота в моде"); break;
	default: puts("Некорректный вариант"); break;
	}
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
