#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more header gose there */
int main (void)

{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code gose here */
	last_digit = n % 10;
	/*if (last_digit )*/ 
	printf("last_digit of %d is %d", n, last_digit);
	if (last_digit > 5 ) {
		 printf("last_digit of %d is %d is greater then 5", n, last_digit);
	}
	
	else if (last_digit < 6){
		 printf("last_digit of %d is %d is less than 6 and not 0 ", n, last_digit);
	}
	else{
		 printf("last_digit of %d is %d is 0", n, last_digit);
	}

	/* this is the second work */
	return 0;
}

