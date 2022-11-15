#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;
	return res;
}
double powerA2(double b) {
	double res = b * b;
	return res;
}
double powerA4(double c) {
	double res = c * c * c * c;
	return res;
}
double aMean(double x, double y) {
	return (x + y)/2;
}
double gMean(double x, double y) {
	return (x + y) / 2;
}
double triangleP(double a) {
	double res = 3 * a;
	return res;
}
double triangleS(double a) {
	double res = a * a * sqrt(3) / 4;
	return res;
}

	int main() {
setlocale(LC_All,"Russian");


	
	//Proc1.Описать процедуру PowerA3(A, B), вычисляющую третью степень числа A и возвращающую ее в переменной B(A — входной, B — выходной
	//параметр; оба параметра являются вещественными).С помощью этой
	//процедуры найти третьи степени пяти данных чисел.
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}

	//Proc2.Описать 2 функции powerA2(А), powerA4(A), вычисляющию вторую и четвертую степень числа A и
	//возвращающию эти степени(параметры являются вещественными).С помощью этих функций найти вторую и четвертую степень пяти случайных чисел
	/*srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x2 = powerA2(x);
		double x4 = powerA4(x);
		cout << "x = " << x << "x^2 = " << x2 << "x^4 = " << x4 << endl;
	}*/
	/*Proc3.Описать процедуру Mean(X, Y, AMean, GMean), вычисляющую
			среднее арифметическое AMean = (X + Y) / 2 и среднее геометрическое
			GMean =
			√
			X·Y двух положительных чисел X и Y(X и Y — входные,
				AMean и GMean — выходные параметры вещественного типа).С помощью
			этой процедуры найти среднее арифметическое и среднее геометрическое
			для пар(A, B), (A, C), (A, D), если даны A, B, C, D*/
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 100 * 0.1;
		double y1 = rand() % 100 * 0.1;
		double am = aMean(x1, y1);
		double gm = gMean(x1, y1);
		cout << x1 << ' ' << y1 << "am = " << am << "gm = " << gm << endl;
	/*Proc4.Описать 2 функции triangleP(a) и triangleS(a), вычисляющие по стороне a равностороннего треугольника его периметр P = 3·a и 
	площадь S = a 2 · √ 3 / 4 (параметры являются вещественными).С помощью этих функций найти периметры и 
	площади трех равносторонних треугольников с данными сторонами(стороны ввести с клавиатуры).*/
	srand(time(nullptr));
	for (int i = 1; i <= 10; i++) {
		double x1 = rand() % 100 * 0.1;
	
		cout << x1 << ' ' << y1 << "am = " << am << "gm = " << gm << endl;



	}

	
	


}