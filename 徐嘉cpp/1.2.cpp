#include<iostream>
using namespace std;
int main()
{
	const double Pi = 3.14;
	cout << "请输入圆椎底的半径和高：";
	double a, b;
	cin >> a;
	cin >> b;
	cout << "圆锥的体积：" << a * a * Pi * b / 3 << endl;
	return 0;
}