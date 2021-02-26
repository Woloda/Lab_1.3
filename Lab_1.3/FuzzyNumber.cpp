#include <iostream>
#include <sstream>
#include <string>
#include "FuzzyNumber.h"

void FuzzyNumber::Read(FuzzyNumber&obj) {
	double a, b, c;
	do {
		std::cout << "\n\nVvedit znachenie x: "; std::cin >> a;
		std::cout << "Vvedit znachenie l: "; std::cin >> b;
		std::cout << "Vvedit znachenie r: "; std::cin >> c;

		/*
		*Це реалізовано для того щоб зберігати введені дані x, l, r в об'єкті "obj".
		*Тому що ініціалізація нечітких чисел  буде мати вигляд "x - l; x; x + r;"(за умовою задачі), а не
		* "x, l, r".
		* Зберігає "x, l, r" для того щоб зробити дію множення нечітких чисел A на B --- першого його під-елемента
		* --- це (A.x * B.x - B.x * A.l - A.x * B.l - A.l * B.l). Тому що дія "(x_A-l_A)*(x_B-l_b)" не є квівалентною 
		* умові задачі: A.x * B.x - B.x * A.l - A.x * B.l - A.l * B.l -- Тут усюди мінус, а при дії"(x_A-l_A)*(x_B-l_b)",
		* яка вважається неправильною буде 1 плюс. Тому саме нам потрібно зберігати введені значення полів --- "x, l, r"
		* Всі інші дії множення і додавання елементів --- під елементів не зазнають помилок --- тому скорочені умови
		* є правильними.
		*/
		obj.x = a;
		obj.l = b;
		obj.r = c;
	}while(!Init(a, b, c));
}

void FuzzyNumber::Display() {
	std::cout << "\n\nznachenuya danoho obyekta: ( " << x << ", " << l <<", "<< r << " )";
}

bool FuzzyNumber::Init(double a, double b, double c) {
	if (((a - b) < a) && (a < (a + c))) {
		x = a - b;
		l = a;
		r = a + c;
		return true;
	}
	else {
		std::cout << "\nNe chitko vvedeni dani(value)!!!";
		return false;
	}
}

std::string FuzzyNumber::toString() {
	std::stringstream sout;
	sout << "\n\nznachenie x: " << x;
	sout << "\nznachenie l: " << l;
	sout << "\nznachenie r: " << r;
	return sout.str();
}