﻿// ConsoleApplication16.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
	int a, b, c, d, e, f, g, maxnum;
	cout << "enter 7 numbers random: ";
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cout << " find maximum";
	if (a > b) {
		maxnum = a;
	}
	else {
		maxnum = b;
	}
	if (c > maxnum) {
		maxnum = c;
	}
	if (d > maxnum) {
		maxnum = d;
	}
	if (e > maxnum) {
		maxnum = e;
	}
	if (f > maxnum) {
		maxnum = f;

	}
	if (g > maxnum) {
		maxnum = g;
	}
	cout << "maximum " << maxnum;
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
