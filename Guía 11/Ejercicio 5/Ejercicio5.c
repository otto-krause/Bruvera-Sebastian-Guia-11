#include <stdio.h>
#include <stdlib.h>

void showRes()
{
	double a=0, b=0;
	for(int i=1; i<=5; i++)
	{
		printf("Ingrese el valor de la resistenia numero %d:\n", i);
		scanf("%lf", &a);
		printf("La resistencia numero %d es de %g\n", i, a);
		b+=a;
	}
	printf("El total es de %g", b);
}

int main(int argc, char *argv[])
{
	showRes();
	return 0;
}

