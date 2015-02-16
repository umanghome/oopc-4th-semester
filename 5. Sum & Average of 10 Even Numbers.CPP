#include <iostream.h>
#include <conio.h>

void main()
{
	int i, sum = 0, avg, counter = 0;
	clrscr();

	for (i = 2, counter = 0; counter < 10; counter++, i += 2) {
		sum += i;
	}
	avg = (float) sum / 10;

	cout << "The sum is: " << sum;
	cout << "\nThe average is: " << avg;

	getch();
}