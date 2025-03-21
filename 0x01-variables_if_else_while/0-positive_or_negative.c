#include <stdio.h>
#include <time.h>
/* more headers goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2,
	/* your code goes there */

		printf("%d\n n");
	if (n > 0){
		printf("is poditive. \n");
	}
				else if(n < 0){
				printf("is negative. \n");
				}
				else{
				printf("is zero");
				}
	
	return (0);
}
