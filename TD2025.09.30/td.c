#include <stdio.h>

int main(int argc, const char *argv[])
{
	
	double m1 = 0; 										
	double m2 = 0;
	double d = 0;
	const double G = 6.67E-11;
	
	printf("Masse 1: ");
	scanf("%lf", &m1);
	printf("Masse 2: ");
	scanf("%lf", &m2);
	printf("distance: ");
	scanf("%lf", &d);

	if (m1 <= 0 || m2 <= 0 || d <= 0) // condition 1
	// bloc 1
	{		   
		puts("valeur negative non permise");
	}
	else 				// condition 2
	// bloc 2
	{
		double Force = 0;
		Force  = m1 * m2 * G / (d * d);

		printf("%le\n",Force); 
	}
	
}