#include <iostream.h>
#include <Conio.h>

void main()
{
	int n, a, b, i;
	clrscr();

	cout << "Enter n: ";
	cin >> n;

	a = 0;
	b = 1;

	for (i = 0; i < n; i++) {
		cout << a << " ";
		b += a;
		a = b - a;
	}

	getch();
}