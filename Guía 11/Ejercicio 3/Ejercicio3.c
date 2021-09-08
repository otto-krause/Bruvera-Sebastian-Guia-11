#include <stdio.h>
#include <stdlib.h>

void perc(double a, double b, double c)
{
	a= (double) (a/c)*100;
	b= (double) (b/c)*100;
	printf("El porcentaje de hombres que enviaron su curriculum es del %g porciento y el de mujeres es el %g porciento\n", a, b);
}

int main(int argc, char *argv[])
{
	double a=0, b=0, c=0;
	printf("Ingrese el total de hombres y mujeres:\n");
	scanf("%lf %lf", &a, &b);
	c=a+b;
	perc(a, b, c);
	return 0;
}

