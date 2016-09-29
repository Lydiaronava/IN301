#include <stdio.h>

void multi_egyp(int x,int y,int reste)
{
	//~ printf("%d x %d \n",x,y);
	
	//~ if(x == 1) printf("%d x %d = %d \n",x,y,y);
	//~ if(y == 1) printf("%d x %d = %d \n",x,y,x);
	
	if(x>=1 && y>1)
	{
		
		
		if(x%2)	//si x est impair
		{
			printf("= %d x %d + %d \n",x-1,y,reste+y);
			multi_egyp(x-1,y,reste + y);
		}
		
		else //si x est pair
		{
			printf("= %d x %d + %d \n",x/2,2*y,reste);
			multi_egyp(x/2,2*y,reste);
		}	
	}
	
}


int main()
{
	int x,y;
	
	x = 5;
	y = 6;
	
	multi_egyp(x,y,0);
	
return 0;
	
	
}
