#include<iostream>
using namespace std;
int main()
{
	char c;
	int letters = 0, numbers = 0, spaces = 0, others = 0;
	cout << "ÇëÊäÈëÒ»´®×Ö·û£º";
	cin >> c;
	while((c=cin.get())!='\n')
	if (c >= '0' && c <= '9')
		numbers++;
	else if ((c >= 'a' && c <= 'z') || c >= 'A' && c <= 'Z')
		letters++;
	else if (c == ' ')
		spaces++;
	else
		others++;
	cout << "numbers=" << numbers << endl;
	cout << "letters=" << letters << endl;
	cout << "spaces=" << spaces << endl;
	cout << "others=" << others << endl;
	return 0;
}