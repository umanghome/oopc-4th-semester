#include <iostream.h>
#include <conio.h>

inline float area_c (float x) {
	return (3.14 * x);
}

inline int area_s (int x) {
	return (x * x);
}

inline int area_r (int l, int b) {
	return (l * b);
}

int main()
{
	clrscr();
	cout << "The area of circle with radius 7 is: " << area_c(7);
	cout << "\nThe area of square with edge 8 is: " << area_s(8);
	cout << "\nThe area of rectangle with length 5, and breadth 2 is: " << area_r(5, 2);

	getch();
	return 0;
}