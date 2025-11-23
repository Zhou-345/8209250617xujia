#include<iostream>
using namespace std;
int main()
{
	int a, b, gcd=0, lcm, i;
	cout << "请输入两个数字：";
	cin >> a;
	cin >> b;
	for (i = 1; i <= a&&i<= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	cout << "最大公因数为：" << gcd << endl;
	lcm = a * b / gcd;
	cout << "最小公倍数为：" << lcm << endl;
	return 0;
}