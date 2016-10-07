#include <stdio.h>

void nombre_ami(int n, int m)
{
	int i,Sn,Sm;
	
	Sn = 0;
	Sm = 0;
	
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			Sn = Sn + i;
		}
	}
	
	for(i=1;i<m;i++)
	{
		if(m%i == 0)
		{
			Sm = Sm + i;
		}
	}
	
	if((n == Sm) && (m == Sn))
	{
		printf("%d et %d sont des nombres amis \n",n,m);
	}
	//~ else printf("%d et %d ne sont pas des nombres amis \n",n,m);
	
}



int main()
{
	
	int nmax; int i,j;
	
	scanf("%d",&nmax);
	
	for(i=1 ; i<nmax ; i++)
	{
		for(j=1 ; j<i ; j++)
		{
			nombre_ami(i,j);
		}
	}
	
	
return 0;
	
	
}
