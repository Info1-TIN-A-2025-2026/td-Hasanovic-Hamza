#include <stdio.h>

int main(int argc, const char *argv[])
{
	printf("Number of seconds : ");
	int s = 0; // nombre de secondes // signed int = int
	scanf("%d", &s);

	if (s < 0) // condition 1
	{		   // bloc 1
		puts("Error");
	}
	else if (s >= 86400) // condition 2
	{					 // bloc 2
		puts("Overflow");
	}
	else // condition 3
	{	 // bloc 3
		unsigned int hours = 0;
		unsigned int minutes = 0;
		unsigned int secondes = 0;

		hours = s / 3600;
		minutes = s / 60 - hours * 60;
		secondes = s - minutes * 60 - hours * 3600;

		printf("%02u:%02u:%02u\n",hours,minutes,secondes); 
	}
}