#include <stdio.h> // pour printf et scanf
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	long volume = 42; 										// m^3

	printf("volume = [%ld]\n", volume);
	printf("volume = [%7ld]\n", volume); 					// right justified 
	printf("volume = [%-7ld]\n", volume); 					// left justified 
	
	printf("volume = %+ld\n", volume);
	printf("volume = [%+7ld]\n", volume);
	printf("volume = [%-7ld]\n", volume); 

	long pression = -4; 									// bar 
	printf("pression = [%ld]\n", pression);

	double pi =  3.141592653589793;
	printf("pi = [%+.2lf]\n", pi); 							// 6 digit after decimal point // le point apres % avec le chiffre nous indique le nombre de chiffre apres la virgule

	double absolut_zero = -459.67; 							// F
	printf( "absolut_zero = [%.1lf]\n", absolut_zero);

	printf( "pi =[%+10.2lf]\n", absolut_zero);
	printf( "pi = [%+10.2lf]\n", pi);

	double Vitesse_lumiere = 299792458.0; 					//  m/s
	
	printf( "pi = [%+10.2lf]\n", Vitesse_lumiere); 			// si trop grand et ne rentre pas dans %+10.2

	int num_digits = 3;  									// %.3lf
	printf("pi = [%.*lf]\n", num_digits, pi); 				// num de digits apres le point decimal  

	int widht = 8;
	num_digits = 3;
	printf("pi = [%+*.*lf]\n",widht, num_digits, pi); 		// num de digits apres le point decimal

}
