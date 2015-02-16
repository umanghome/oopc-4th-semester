#include <iostream.h>
#include <conio.h>

int main()
{
	int a, b;
	float avg;
	clrscr();

	cout << "Enter number one: ";
	cin >> a;

	cout << "Enter number two: ";
	cin >> b;

	avg = ((float) a + (float) b) / 2;

	cout << "The average is: " << avg;

	getch();
	return 0;
}