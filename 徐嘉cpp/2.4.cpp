#include<iostream>
using namespace std;
int main()
{
	int  a, b;
	char c;
	cout << "请输入要计算的表达式：";
	cin >> a;
	cin >> c;
	cin >> b;
		if (c == '*')
		{
			cout << "结果为：" << a * b << endl;
		}
		else if (c == '/')
		{
			if (b == 0)
			{
				cout << "除数为零" << endl;
			}
			else
			{
				cout << "结果为：" << a / b << endl;
			}
		}
		else if (c == '+')
		{
			cout << "结果为：" << a + b << endl;
		}
		else if (c == '-')
		{
			cout << "结果为：" << a - b << endl;
		}
		else if (c == '%')
			cout << "结果为：" << a % b << endl;
		else
		{
			cout << "运算符非法" << endl;
		}
	return 0;
}