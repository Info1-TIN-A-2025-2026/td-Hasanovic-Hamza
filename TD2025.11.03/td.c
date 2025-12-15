
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
// 	unsigned int n = 0;
// 	unsigned int w = 0;
// 	const unsigned int base = 10;

// 	printf("n =");
// 	scanf("%u", &n);

// 	if(n<10)
// 	{
// 		w++;
// 		printf("nombre de digits = [%u]", w);
// 	}
// 	if(n>10)
// 	{
// 	while (n>=10)
// 	{
// 		(n /= base);
// 		w++;
// 	}
// 	w++;
// 	printf("nombre de digits = [%u]", w);
// 	}
	
// 	return 0; 
// }
	
unsigned int n = 0;
unsigned int w = 0;

	
	do
	{
		printf("enter value n =");
 		scanf("%u", &n);
		
	} while (n <10 || n>20);
	printf("w = %u\n", w);
}
}