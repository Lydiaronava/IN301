#include <stdio.h>

int main()
{
	int i;
	float somme; somme = 0;
	float precision = 0.01;
	i = 0;
	
	while((1.0/(i*i) > precision)
	{
		somme = somme + 1.0/(i*i);
		i++;
	}
	
	printf("%f \n",somme);
	
return 0;
}
//~ }
