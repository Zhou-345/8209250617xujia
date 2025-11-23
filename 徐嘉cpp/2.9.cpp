#include<iostream>
using namespace std;
int main()
{
	const double price = 0.8;
	int d = 1, cnt = 2, sum = 2;
	while (1)
	{
		int next = 2 * cnt;
		if (sum + next > 100)
			break;
		sum = sum + next;
		cnt = next;
		d++;
	}
	double t = sum * price;
	double a = t / d;
	cout << a << endl;
	return 0;
}