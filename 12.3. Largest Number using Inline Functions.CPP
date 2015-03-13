#include <iostream.h>
#include <conio.h>

int inline largest (int x, int y, int z)
{
	if ((x > y) && (x > z))
		return x;
	else if ((y > x) && (y > z))
		return y;
	else
		return z;
}

int main()
{
	clrscr();
	cout << "The largest of 78, 97, and 54 is: " << largest(54, 78, 97);
	getch();
	return 0;
}