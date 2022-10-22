#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	/*int i = 20;
	while (i <= 30) {
		if (i % 2 != 0) {
			cout << i << " ";
		}
		i += 1;
	}
	.Даны десять вещественных чисел.Найти их сумму.*/
	/*int i=1;
	double a,sum;
	sum = 0;
	while (i <= 10) {
		cin >> a;
		sum = sum + a;
		i++;
	}
	cout << sum;
	Даны десять вещественных чисел.Найти их произведение.*/
	/*double a,b =1;
	for (int i = 1; i <= 10; i++) {
		cin >> a;
		b = b * a;
	}
	cout << b;*/
	/*Series3.Даны десять вещественных чисел.Найти их среднее арифметическое*/
	/*int i = 1;
	double a, sum;
	sum = 0;
	while (i <= 10) {
		cin >> a;
		sum = sum + a;
		i++;
	}
	sum = sum / 10.0;
	cout << sum;*/
	/*Series4.Дано целое число N и набор из N вещественных чисел.Вывести
		сумму и произведение чисел из данного набора.*/
	/*int a;
	double b, sum, pr;
	sum = 0;
	pr = 1;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		sum = sum + b;
		pr = pr * b;
	}
	cout << sum << endl;
	cout << pr << endl;*/
	/*Series5.Дано целое число N и набор из N положительных вещественных
		чисел.Вывести в том же порядке целые части всех чисел из данного
		набора(как вещественные числа с нулевой дробной частью), а также
		сумму всех целых частей.*/
	/*int i = 1;
	int a;
	cin >> a;
	double b;
	int sum=0;
	while (i <= a) {
		cin >> b;
		sum = sum + (int)b;
		cout << (int)b << endl;
		i++;
	}
	cout << sum;*/
	/*Series6.Дано целое число N и набор из N положительных вещественных
		чисел.Вывести в том же порядке дробные части всех чисел из данного набора(как вещественные числа с нулевой целой частью), а также
		произведение всех дробных частей.*/
	/*int a;
	double b,pr=1;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		cout << b - (int)b << endl;
		pr = pr *( b - (int)b);
	}
	cout << pr;*/

}