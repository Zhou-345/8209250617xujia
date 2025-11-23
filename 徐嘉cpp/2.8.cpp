#include<iostream>
using namespace std;
int main()
{
	double a, x1, x2;
	const double i = 1e-5;
	cout << "请输入a的值：";
	cin >> a;
	x1 = a;
	do
	{
		x2 = (x1 + a/x1) / 2;
		if (fabs(x2 - x1) < i)
			break;
		x1 = x2;
	} while (true);
	cout << "平方根：" << x2<< endl;
	return 0;
}