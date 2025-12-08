
 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, const char *argv[])
 {
// 	unsigned int n = 0;
// 	const unsigned int I_Min = 10;
// 	const unsigned int I_Max = 20;
// 	//char c=0;


// 	do
// 	{
// 		int ret = 0;

// 		printf("enter an integral value  [%u...%u]=", I_Min, I_Max);
// 		ret = scanf("%u", &n);
// 		if (ret!=1)
// 		{ 
// 			while (getchar()!='\n'){}		// vider le buffer clavier

// 			// do{
// 			// 	c = getchar(); 	
// 			// } while (c!= '\n');						// vider le buffer clavier
// 		}

// 	} while (n <I_Min || n>I_Max);
	
// 	printf("value n = %u\n", n);

unsigned int n = 0;

    printf("enter the state (0=ERREUR, 1=ON, 2=OFF, 4=BLINK)= ");
    scanf("%u", &n);

    switch (n)
    {
    case (0):
         puts("ERREUR");
        break;
    
    case (1):
         puts("ON");
        break;
    
    case (2):
         puts("OFF");
        break;
    case (4):
         puts("BLINK");
        break;
    default:
        break;
    }
 }