#include <iostream>
#include <cmath>
using namespace std;
double f(const double x);
int main()
{
	double tp, tk, z;
	int n;
	cout << "tp = "; cin >> tp;
	cout << "tk = "; cin >> tk;
	cout << "n = "; cin >> n;
	double dg = (tk - tp) / n;
	double t = tp;
	while (t <= tk)
	{
		z = f(t * t) + 2 * f(2 * t + 1);
		cout << t << " " << z << endl;
		t += dg;
	}
	return 0;
}
long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
double f(const double x)
{
	if (abs(x) >= 1)
		return ((sin(x) + 1) / (sin(x) + cos(x)));
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		S = a;
		do
		{
			double q = 2 * i + 1;
			i++;
			double R = pow(x, q) / (fact(q));
			a *= R;
			S += a;
		} while (i < 8);
		return S;
	}
}