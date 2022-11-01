#pragma once
#include "Pair.h"; 
class Complex : public Pair
{
	
public:
	int c, d;
	Complex operator *(Complex D) {
		Complex tmp;
		tmp.c = c - D.c;
		tmp.d = d + D.d;
		return tmp;
	};
	Complex operator - (Complex D) {
		Complex tmp;
		tmp.c = c - d;
		tmp.d = D.c + D.d;
		return tmp;
	};
	 void Read() {

		 cout << "c': ";
		 cin >> c;
		 cout << "d': ";
		 cin >> d;

	 };
	 void display() {   // ����������� �� ������� 
		 cout << "c:" << c << "  d: " << d << endl;
	 }
};

//17. Створити клас Pair (пари чисел); визначити метод перемножування
//полів і операцію додавання пар (a, b) + (c, d) = (a + b, c + d). Визначити похідний
//клас Complex з полями: дійсна й уявна частини числа. Визначити методи
//множення (a, b) * (c, d) = (ac - bd,ad + bc) і віднімання (a, b) - (c, d) = (a – b, c - d)
