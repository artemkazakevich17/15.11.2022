#include <iostream>
#include <ctime>
using namespace std;
double powerA3(double a) {
	double res = a * a * a;

	return res;
}
	int main() {

	
	//Proc1.������� ��������� PowerA3(A, B), ����������� ������ ������� ����� A � ������������ �� � ���������� B(A � �������, B � ��������
	//��������; ��� ��������� �������� �������������).� ������� ����
	//��������� ����� ������ ������� ���� ������ �����.
	srand(time(nullptr));
	for (int i = 1; i <= 5; i++) {
		double x = rand() % 11;
		double x3 = powerA3(x);
		cout << "x = " << x << " x^3 = " << x3 << endl;
	}
}