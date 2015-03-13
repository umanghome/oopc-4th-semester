#include <iostream.h>
#include <conio.h>

class Data {
	int a, b;
	public:
		void setData () {
			cout << "Enter number 1: ";
			cin >> a;
			cout << "Enter number 2: ";
			cin >> b;
		}

		int add () {
			return (a + b);
		}

		int sub () {
			return (a - b);
		}

		int mul () {
			return (a * b);
		}

		float div () {
			return ((float) a / (float) b);
		}

		int mod () {
			return (a % b);
		}
};

int main()
{
	Data num;
	clrscr();
	num.setData();
	cout << "\nThe addition is: " << num.add();
	cout << "\nThe subtraction is: " << num.sub();
	cout << "\nThe multiplication is: " << num.mul();
	cout << "\nThe division is: " << num.div();
	cout << "\nThe modulo is: " << num.mod();

	getch();
	return 0;
}