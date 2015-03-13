#include <iostream.h>
#include <conio.h>

void main()
{
	int number, key, i, copy, length = 0, rev = 0, found = 0;
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
	number = copy;
	i = 0;
	while (i < length)
	{
		if (rev % 10 == key)
		{
			found = 1;
			break;
		}
		rev /= 10;
		i++;
	}

	if (found == 1)
		cout << "Found " << key << " at position " << i + 1;
	else
		cout << "Could not find " << key << "!";

	getch();
}