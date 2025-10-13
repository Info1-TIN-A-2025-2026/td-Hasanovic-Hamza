#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	float x = 0.f;
	float y = 0.f;
	
	int ret = 0;

	// printf("Enter of floting point value x:");

	// ret = scanf("%f", &x); // &x 0 = addresse de la variable X
	// printf("x = %.4f\n", x);
	// printf("ret = %d\n", ret);


	// printf("Enter of floting point value Y:");
	
	// ret = scanf("%f", &y); // &x 0 = addresse de la variable Y
	// printf("y = %.4f\n", y);
	// printf("ret = %d\n", ret);

	// printf("Enter two floting points values (space separeat):");
	// ret = scanf("%f %f", &x, &y);
	// printf("ret = %d\n", ret);
	// printf("x = %.4f\n", x);
	// printf("y = %.4f\n", y);


	printf("Enter two floting points values (: separeat):");
	ret = scanf("%f:%f", &x, &y);
	printf("ret = %d\n", ret);
	printf("x = %.4f\n", x);
	printf("y = %.4f\n", y);
	
}