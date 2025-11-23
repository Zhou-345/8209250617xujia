#include<iostream>
using namespace std;
int main()
{
	int x;
	cout << "请输入x的值：";
	cin >> x;
	if (x > 0 && x < 1)
	{
		cout << 3 - 2 * x << endl;
	}
	else if (x >= 1 && x < 5)
	{
		cout << 2 / 4 / x + 1 << endl;

	}
	else if (x >= 5 && x < 10)
	{
		cout << x * x << endl;
	}
	else
	{
		cout << "x的值超过有效值范围" << endl;
	}
	return 0;
}