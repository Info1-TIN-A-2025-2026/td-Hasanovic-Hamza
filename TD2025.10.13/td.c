#include <stdio.h> 
#include <stdbool.h>

int main(int argc, const char *argv[])
{
	double Volatilite = 27.4;
	double Taux_interet = 1.5;
	double Action_price = 0;
	double Strike_price = 0;
	double Time_years = 0;
	double Contrat_price = 0;
	double d1 = 0;
	double d2 = 0;

	int ret = 0;
	

	printf("Entre action price, entre stike price, entre time in yers: (: separeat):");
	ret = scanf("%lf:%lf:%lf", &Action_price, &Strike_price, &Time_years);

	if (Action_price <=0 || Strike_price <=0 || Time_price<=0 )
	{
		puts("The value must be >0\n")
	}

	else 
	{
		d1 = 1/(Volatilite*sqrt(Time_years))*((log(Action_price/Strike_price))+(Taux_interet+1/2*pow(Volatilite, 2))*Time_years)
		d2 = d1-(Volatilite*sqrt(Time_years))

		Contrat_price = Action_price * (exp(-d1/2)/sqrt(2*3.14)) - Strike_price * exp(-r * Time_years) * (exp(-d2/2)/sqrt(2*3.14));
		
	}
}
