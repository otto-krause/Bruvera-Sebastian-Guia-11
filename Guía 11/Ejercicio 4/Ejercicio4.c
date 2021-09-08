#include <stdio.h>
#include <stdlib.h>

void calcPa(double a, double b)
{
	double Pa=0;
	Pa= (double) a/b;
	printf("La presion es de %g pa", Pa);
}

int main(int argc, char *argv[])
{
	double a=0, b=0;
	printf("Ingrese la fuerza (en newtons) y la superficie (en metros cuadrados):\n");
	scanf("%lf %lf", &a, &b);
	calcPa(a, b);
	return 0;
}

