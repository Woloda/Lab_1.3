#include <iostream>
#include "FuzzyNumber.h"

FuzzyNumber Addit(FuzzyNumber obj_A, FuzzyNumber obj_B) {
	FuzzyNumber obj_addit;
	obj_addit.x = obj_A.x + obj_B.x;  //скорочена форма(повна форма: "x_A + x_B – l_A – l_B")
	obj_addit.l = obj_A.l + obj_B.l;  //скорочена форма(повна форма: "x_A + x_B
	obj_addit.r = obj_A.r + obj_B.r;  //скорочена форма(повна форма: "x_A + x_B + r_A + r_B")

	std::cout << " ( " << obj_addit.x << ", " << obj_addit.l << ", " << obj_addit.r << " )";
	return obj_addit;
}

FuzzyNumber Multi(FuzzyNumber obj_A, FuzzyNumber obj_B, FuzzyNumber A, FuzzyNumber B) {
	FuzzyNumber obj_multi;
	obj_multi.x = A.x * B.x - B.x * A.l - A.x * B.l - A.l * B.l;  //повна форма: оскільки (x_A-l_A)*(x_B-l_b) --- при розкладанні буде мати вигляд "...-...-...+..."
	obj_multi.l = obj_A.l * obj_B.l;                              //скорочена форма(повна форма: "xA * xB")
	obj_multi.r = obj_A.r * obj_B.r;                              //скорочена форма(повна форма: "x_A * x_B + x_B * r_A + x_A * r_B + r_A * r_B")

	std::cout << " ( " << obj_multi.x << ", " << obj_multi.l << ", " << obj_multi.r << " )";
	return obj_multi;
}