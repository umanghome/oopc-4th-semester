#include <iostream.h>
#include <conio.h>

float area (float r);
int area (int l);
int area (int l, int b);

int main()
{
	clrscr();
	cout << "The area of circle with radius 1.2 is: " << area((float) 1.2);
	cout << "\nThe area of square with edge 2 is: " << area(2);
	cout << "\nThe area of rectangle with length 5, and breadth 2 is: " << area(5, 2);

	getch();
	return 0;
}

float area (float r)
{
	return (3.14 * r * r);
}

int area (int l)
{
	return (l * l);
}

int area (int l, int b)
{
	return (l * b);
}