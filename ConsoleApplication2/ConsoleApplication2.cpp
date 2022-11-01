// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
У всіх завданнях реалізувати функцію, що отримує, та повертає об'єкти
базового класу. Продемонструвати принцип підстановки.
17.Створити клас Pair (пари чисел); визначити метод перемножування
полів і операцію додавання пар (a, b) + (c, d) = (a + b, c + d). Визначити похідний
клас Complex з полями: дійсна й уявна частини числа. Визначити методи
множення (a, b) * (c, d) = (ac - bd,ad + bc) і віднімання (a, b) - (c, d) = (a – b, c - d)
*/

#include <iostream>
using namespace std;
#include "Pair.h"
#include "Complex.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");    //������� ����
	Pair N;
	N.Read();
	N.display();
	
	Complex M;
	M.Read();
	M.display();
	Complex D;
	D.Read();
	D.display();
	Complex P;
	P = M - D;
	cout << "Res:" << endl;

	P.display();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


