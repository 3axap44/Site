
#include <iostream>
#include <conio.h>
#include <math.h>

int main()
{
	using namespace std;
	int x = 14;
	float q, pi = 3.14;
	q = exp(x * x * log(2 * x)) + pi / 2 - atan(sqrt(exp(1)));
	cout << q;
	_getch();
	return 0;
}


123