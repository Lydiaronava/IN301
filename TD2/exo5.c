#include <stdio.h>

int main()
{
	int T;
	
	T = 3000;
	
	int heures,minutes,secondes;
	
	heures = T / 3600;
	minutes = (T%3600) / 60;
	secondes = T%60;

	
	
	
	printf("%d correspond à %d heures %d minutes et %d secondes \n",T,heures,minutes,secondes);
	

return 0;
	
}
