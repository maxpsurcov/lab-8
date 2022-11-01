#pragma once
#include <iostream>
#include <string>
#include<cassert>
using namespace std;
class Pair
{
	int a;
	int b;
public:
	Pair operator +(Pair D) {
		Pair tmp;
		tmp.a = a + D.a;
		tmp.b = b + D.b;
		return tmp;
	}


	void Read() {

		cout << "a': ";
		cin >> a;
		cout << "b': ";
		cin >> b;
		
	};
	void display() {   // ����������� �� ������� 
		cout << "a:" << a << "  b: " << b << endl;
	}

	
};
//Створити клас Pair (пари чисел); визначити метод перемножування
//полів і операцію додавання пар (a, b) + (c, d) = (a + b, c + d). Визначити похідний
//клас Complex з полями: дійсна й уявна частини числа. Визначити методи
//множення (a, b) * (c, d) = (ac - bd,ad + bc) і віднімання (a, b) - (c, d) = (a – b, c - d)
