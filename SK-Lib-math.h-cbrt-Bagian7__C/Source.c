#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
	double x = -64.64;
	double hasil;

	hasil = cbrt(x);
	printf("The cube root of %.2f is %.6f\n", x, hasil);

	_getch();
	return 0;
}