#include <stdio.h>
#include <stdlib.h>

void calc(double a, double b)
{
	double P=0, A=0;
	P= (double) 2*a+2*b;
	A= (double) a*b;
	printf("El perimetro del rectangulo es %g y su area es %g\n", P, A);
}

int main(int argc, char *argv[])
{
	double a=0, b=0;
	printf("Ingrese la altura y anchura del rectangulo:\n");
	scanf("%lf %lf", &a, &b);
	calc(a, b);
	return 0;
}

