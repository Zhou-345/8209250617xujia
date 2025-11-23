#include<iostream>
using namespace std;
int main()
{
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º";
	char c;
	cin >> c;
	if (c >= 'a' && c <= 'z')
	{
		cout << (char)c - 32 << endl;
	}
	else
	{
		cout << (int)c + 1 << endl;
	}
	return 0;
}