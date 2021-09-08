#include <stdio.h>
#include <stdlib.h>

void divis()
{
	double a=0, b=0;
	printf("Ingrese un numero:\n");
	scanf("%lf", &a);
	b= (double) a/8;
	printf("La octava parte de %g es %g", a, b);
}

int main(int argc, char *argv[])
{
	divis();
	return 0;
}

