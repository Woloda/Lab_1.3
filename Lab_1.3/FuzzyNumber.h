#pragma once
class FuzzyNumber {          //робота з нечіткими числами
	double x, l, r;
public:
	void set_x(double value_x, double value_l) { x = (value_x - value_l); }
	double get_x()const { return x; }

	void set_l(double value) { l = value; }
	double get_l()const { return l; }

	void set_r(double value_x, double value_r) { r = (value_x - value_r); }
	double get_r()const { return r; }

	void Read(FuzzyNumber&);            //метод введення даних
	void Display();                     //метод виведення даних
	bool Init(double, double, double);  //метод перевірки на правильність введених даних і ініціалізація їх

	std::string toString();

	friend FuzzyNumber Addit(FuzzyNumber, FuzzyNumber);                               //функція: дія --- додавання
	friend FuzzyNumber Multi(FuzzyNumber, FuzzyNumber, FuzzyNumber, FuzzyNumber);	  //функція: дія --- множення
};