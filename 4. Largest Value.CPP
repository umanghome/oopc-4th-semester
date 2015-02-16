#include <iostream.h>
#include <conio.h>

void main()
{
	int a, b, c, max;
	clrscr();

	cout << "Enter number one: ";
	cin >> a;
	cout << "Enter number two: ";
	cin >> b;
	cout << "Enter number three: ";
	cin >> c;

	if (a > b) {
		if (a > c)
			max = a;
		else
			max = c;
	}
	else if (b > a) {
		if (b > c)
			max = b;
		else
			max = c;
	}
	else if (c > a) {
		if (c > b)
			max = c;
		else
			max = b;
	}

	cout << "The maximum value is: " << max;

	getch();
}