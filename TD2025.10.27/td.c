//#include <stdio.h> // pour printf et scanf

//int main(int argc, const char *argv[])
//{
	// int a = 0;
	// int b = 0;
	// int q = 0;
	// int r = 0;

	// printf("enter a: ");
	// scanf("%d", &a);

	// printf("enter b: ");
	// scanf("%d", &b);

	// q = a / b;
	// r = a % b;

	// printf("a/b = %d\n", q);
	// printf("a%%b = %d\n", r);

	//int a = 10;
	//printf("%d\n", a++); // 10

	//a = 10;
	//printf("%d\n", ++a); // 11

	//char x = 127;
	//printf("%c\n", ++x); //-128

	//return 0;
//}
#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	const unsigned int I_min = 2;
	const unsigned int I_max = 100;

	unsigned int i = 0;

	for (i = I_min; i < I_max; i++)
	{
		bool is_prime = true;

		unsigned int j = 0;
		for (j = I_min; j <= i - 1; j++)
		{
			if ((i % j) == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}