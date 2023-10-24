// Lab_05_3.cpp
// < Зозюк Влад >
// Лабораторна робота № 5.3
//  Функції, що містять розгалуження та цикли з рекурентними співвідношеннями.
// Варіант 8
#include <iostream>
#include <cmath>
using namespace std;
double s(const double x);
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = s(sqrt(r) + 1) - pow(s(sqrt(r) - 1), 2) + 1;
		cout << r << " " << z << endl;
		r += dr;
	}
	return 0;
}
double s(const double x)
{
	if (abs(x) >= 1)
		return (1 + pow(x, 2) + sqrt(abs(sin(x)))) / (pow(sin(2 * pow(x,2)) ,2) + 1);
	else
	{
		double S = 0;
		int i = 0;
		do
		{
			i++;
			double R = pow(x, i) / tgamma(i);
			S += R;
		} while (i < 5);
		double S1 = 0;
		int k = 1;
		do
		{
			k++;
			double R1 = pow(x, k) / tgamma(k);
			S1 += R1;
		} while (k < 6);

		return S + S1;
	}
}