#include <stdio.h>

int main()
{
	//~ int test;
	//~ 
	//~ test = 19;
	
	//~ if((test%2 == 0) || (test%3 == 0) || (test%5 == 0) || (test%7 == 0))
	//~ {
		//~ printf("%d n'est un nombre premier \n",test);
	//~ }
	//~ else
	//~ {
		//~ printf("%d est un nombre premier \n",test);
	//~ }
	//~ 
	
	int a,i;
	
	scanf("%d",&a);
	
	i=2;
	
	while( i != (a - 1))
	{
		if(a%i == 0)
		{
			print("faux");
			return 0;
		}
		i++;
	}
	printf("vrai");
	
return 0;
}
