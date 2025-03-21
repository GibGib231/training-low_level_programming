#include<stdio.h>
int main(void)
	/* this should print the alphabet */
{
	
	char letter = 'a';
	while(letter <= 'z') {
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return 0;
}
