#include <iostream.h>
#include <conio.h>

void main()
{
	int number, key, i, copy, length = 0, rev = 0;
	clrscr();

	cout << "Enter the number: ";
	cin >> number;
	cout << "Enter the key: ";
	cin >> key;

	copy = number;

	while (number > 0)
	{
		rev = (rev * 10) + (number % 10);
		number /= 10;
		length++;
	}
	cout << rev << "\n";
	number = copy;
	i = 0;
	while (i < length)
	{
		if (rev % 10 == key)
		{
			break;
		}
		rev /= 10;
		i++;
	}

	cout << "Found " << key << " at position " << i + 1;

	getch();
}