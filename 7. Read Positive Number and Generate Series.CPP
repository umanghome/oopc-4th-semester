#include <iostream.h>
#include <conio.h>

void main()
{
	int n, i;
	clrscr();

	cout << "Enter n: ";
	cin >> n;

	for (i = n; i >= 0; i--)
		cout << i << " ";
	for (i = 1; i <= n; i++)
		cout << i << " ";

	getch();
}