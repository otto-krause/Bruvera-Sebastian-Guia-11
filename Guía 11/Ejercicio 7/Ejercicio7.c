#include <stdio.h>
#include <stdlib.h>

void rel(double a, double b)
{
	if(a<b)
	{
		printf("El numero mayor es %g", b);
	}
	else if(a>b)
	{
		printf("El numero mayor es %g", a);
	}
	else
	{
		printf("Son iguales");
	}
}

int main(int argc, char *argv[])
{
	double a=0, b=0;
	printf("Ingrese 2 numeros:\n");
	scanf("%lf %lf", &a, &b);
	rel(a, b);
	return 0;
}

