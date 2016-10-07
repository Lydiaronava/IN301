#include <stdio.h>

int main()
{
	float e;
	float inf,sup,moy;
	int n;
	
	n = 36;	//n est le nombre dont on cherche la racine
	
	inf = 0.0;
	sup = n; 	
	
	e = 0.001;
	
	while((sup-inf) > e)
	{
		moy = ((inf + sup) / 2);
		
		if(moy*moy > n)
		{
			sup = moy;
		}
		else if(moy*moy < n)
		{
			inf = moy;
		}
	}
	
	printf("la racine de %d est %f\n",n,sup);
	
return 0;
	
	
	
}
