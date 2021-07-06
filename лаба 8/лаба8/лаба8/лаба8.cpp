#include <iostream>
using namespace std;

int main() {

	setlocale(LC_CTYPE, "RUS");
	printf("\t#3 основа\n");
	std::cout << "Метод трапеции" << endl;
	float a3 = 1, n, a=0, s, x, h, b3 = 6;
	n = 200;
	s = 0;
	x = a;
	for (int i = 1; i > 0; i++) {
		h = (b3 - a3) / n;
		s = s + h * ((1 + pow(x, 3)) + (1 + pow(x + h, 3)) / 2);
		x = x + h;
		if (x > (b3 - h)) break;
	}
	printf("%f", s);

	printf("\n\tМетод парабол\n");
	float s2, s1, k, z;
	h = (b3 - a3) / (2 * n);
	x = a3 + 2 * h;
	s1 = 0;
	s2 = 0;
	k = 1;
	for (int o = 1; o > 0; o++) {
		s2 = s2 + (1 + pow(x, 3));
		x = x + h;
		s1 = s1 + (1 + pow(x, 3));
		x = x + h;
		k = k + 1;
		if (k < n) break;
	}
	z = (h / 3) * (1 + pow(a3, 3)) + 4 * ((1 + pow(a3 + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b3, 3)));
	cout << z;

	printf("\n\tМетод касательных\n");
	float x1, e, b;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	if (0 < (x - ((pow(x, 3) + (2 * x) - 1)) / (2 * pow(x, 2)) + 2)) x1 = a;
	else x1 = b;
	do {
		x = x1;
		x1 = (x - ((pow(x, 3) + (2 * x) - 1)) / (2 * pow(x, 2)) + 2);
	} while (abs(x1 - x) > 2.7182);
	cout << x1;

	printf("\n\tМетод дихотомии\n");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	scanf_s("%f", &e);
	do {
		x = (a + b) / 2;
		if (((pow(x, 3) + (2 * x) - 1) * (pow(a, 3) + (2 * a) - 1)) <= 0)b = x;
		else a = x;
	} while (abs(a - b) > 2 * 2.7182);
	cout << x;
}
	