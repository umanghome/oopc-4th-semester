#include <iostream.h>
#include <conio.h>

void main()
{
	int n, i;
	clrscr();

	do {
		cout << "Enter n: ";
		cin >> n;
	} while (n % 2 != 0);
	

	for (i = n; i >= 0; i--)
		cout << i << " ";
	for (i = 1; i <= n; i++)
		cout << i << " ";

	getch();
}