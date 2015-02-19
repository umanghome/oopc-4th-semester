/*
 * Series: x - [(x ^ 3) / 3!] + [(x ^ 5) / 5!] - ... + [(x ^ n) / n!]
 */

#include <iostream.h>
#include <conio.h>
#include <math.h>

int fact (int n);

void main()
{
    int i, n, x, counter = 0;
    float sum;

    do {
        cout << "Enter odd, and positive n: ";
        cin >> n;
    } while (n % 2 == 0);
    cout << "Enter x: ";
    cin >> x;
    for (i = 1; i <= n; i += 2, counter++) {
        sum += (pow(-1, counter) * pow(x, i)) / ((float) fact(i));
    }

    cout << "The answer of the series is: " << sum;

    getch();
}

int fact (int n) {
    if (n == 1)
        return 1;
    return (n * fact(n - 1));
}