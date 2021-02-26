#include <iostream>
#include "FuzzyNumber.h"

int main(void) {
	using std::cout;
	FuzzyNumber A, B;   //Зберігають "x, l, r"
	FuzzyNumber C;      //Зберігає значення дії множення або додавання
	////////////////////////////////////
	FuzzyNumber A_1, B_1;

	cout << "Vvedit dani(value) object A_1: ";
	A_1.Read(A);
	cout << "\nDani(value) object A_1: ";
	A_1.Display();

	cout << "\n\nVvedit dani(value) object B_1: ";
	B_1.Read(B);
	cout << "\nDani(value) object A_1: ";
	B_1.Display();

	cout << "\n\nAddit object A_1 i B_1: ";
	C = Addit(A_1, B_1);
	cout << "\nMulti object A_1 i B_1: ";
	C = Multi(A_1, B_1, A, B);

	cout << C.toString();
	////////////////////////////////////
	FuzzyNumber A_2{}, B_2{};
	FuzzyNumber masuv_obj[2]{A_2, B_2};

	cout << "\n\nVvedit dani(value) object A_2: ";
	A_2.Read(A);
	cout << "\nDani(value) object A_2: ";
	A_2.Display();

	cout << "\n\nVvedit dani(value) object B_2: ";
	B_2.Read(B);
	cout << "\nDani(value) object B_2: ";
	B_2.Display();

	cout << "\n\nAddit object A_2 i B_2: ";
	C = Addit(A_2, B_2);
	cout << "\nMulti object A_2 i B_2: ";
	C = Multi(A_2, B_2, A, B);

	cout << C.toString();
	////////////////////////////////////
	return 0;
}