#include <iostream.h>
#include <conio.h>
#include <stdio.h>

class Data {
	char name[20], author[20];
	int price;

	public:
		void setData (void) {
			cout << "Enter name: ";
			gets(name);
			cout << "Enter author: ";
			gets(author);
			cout << "Enter price: ";
			cin >> price;
		}

		void getData (void) {
			cout << "\nName: " << name;
			cout << "\nAuthor: " << author;
			cout << "\nPrice: " << price;
		}
};

int main()
{
	Data book;
	clrscr();
	book.setData();
	book.getData();
	getch();
	return 0;
}