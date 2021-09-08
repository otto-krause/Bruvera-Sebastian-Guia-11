#include <stdio.h>
#include <stdlib.h>

void show(double a, double b)
{
	printf("El primer numero es %g\n", a);
	printf("El segundo numero es %g\n", b);
}

int main(int argc, char *argv[])
{
	double a=0, b=0;
	printf("Ingrese 2 numeros:\n");
	scanf("%lf %lf", &a, &b);
	show(a, b);
	return 0;
}
