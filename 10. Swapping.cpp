#include <iostream.h>
#include <conio.h>

void swapV (int a, int b);
void swapR (int *a, int *b);

void main()
{
    int a, b;
    clrscr();

    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;

    swapV(a, b);
    swapR(&a, &b);
    cout << "\nThis is the result of call by reference:\n";
    cout << "The value of A is: " << a << "\n";
    cout << "The value of B is: " << b << "\n";

    getch();
}

void swapV (int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "\nThis is the result of call by value:\n";
    cout << "The value of A is: " << a << "\n";
    cout << "The value of B is: " << b << "\n";
    return;
}

void swapR (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}