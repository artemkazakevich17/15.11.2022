#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;

	return res;
}
	int main() {

	
	//Proc1.ќписать процедуру PowerA3(A, B), вычисл€ющую третью степень числа A и возвращающую ее в переменной B(A Ч входной, B Ч выходной
	//параметр; оба параметра €вл€ютс€ вещественными).— помощью этой
	//процедуры найти третьи степени п€ти данных чисел.
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}
}