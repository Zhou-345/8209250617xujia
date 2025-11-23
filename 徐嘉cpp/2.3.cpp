#include<iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "输入三角形的三边长：";
	cin >> a;
	cin >> b;
	cin >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b || b == c || a == c)
		{
			d = a + b + c;
			cout << "该三角形是等腰三角形" << endl << "该三角形的周长是" << d << endl;
		}
		else
			cout << "不是等腰三角形" << endl;
	}
	else
		cout << "不能构成三角形";
	return 0;
}