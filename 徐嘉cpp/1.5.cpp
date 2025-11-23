#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double c, a;
	cout << "请输入华氏温度：";
	cin >> c;
	a = (c - 32) * 5 / 9.0;
	cout << "转换为摄氏温度为：" <<fixed<<setprecision(2)<< a << endl;
	return 0;
}