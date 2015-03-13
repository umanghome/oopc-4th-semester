#include <iostream.h>
#include <conio.h>

int square (int x);
float square (float x);
double square (double x);

int main()
{
	int x = 2;
	float y = 2.1111;
	double z = 2.111111111;
	clrscr();

	cout << "The square of " << x << " is: " << square(x);
	cout << "\nThe square of " << y << " is: " << square(y);
	cout << "\nThe square of " << z << " is: " << square(z);

	getch();
	return 0;
}

int square (int x)
{
	return (x * x);
}

float square (float x)
{
	return (x * x);
}

double square (double x)
{
	return (x * x);
}