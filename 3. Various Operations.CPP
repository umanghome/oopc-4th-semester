#include <iostream.h>
#include <conio.h>

int main()
{
	int a, b, mul, add, sub, mod, choice;
	float div;
	clrscr();

	cout << "Enter number one: ";
	cin >> a;
	cout << "Enter number two: ";
	cin >> b;

	cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5.Modulo\nEnter your choice: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			add = a + b;
			cout << "The sum is: " << add;
			break;

		case 2:
			sub = a - b;
			cout << "The difference is: " << sub;
			break;

		case 3:
			mul = a * b;
			cout << "The multiplication is: " << mul;
			break;

		case 4:
			div = ((float) a / (float) b);
			cout << "The division is: " << div;
			break;

		case 5:
			mod = a % b;
			cout << "The modulo is: " << mod;
			break;

		default:
			cout << "Wrong choice!\n";
			break;
	}

	getch();
	return 0;
}
