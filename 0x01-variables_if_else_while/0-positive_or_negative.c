#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* this program indicates if the assigned number is 
 * positive or negative 
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{	printf("%d is positive",n);
	}
	else if (n==0)
	{	printf("\n%d is zero",n);
	}
	else 
	{	printf("\n%d is negative",n);
	}
	return (0);
}
