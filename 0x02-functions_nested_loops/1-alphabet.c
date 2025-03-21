#include<stdio.h>
int main (void)
{
	char lowercase = 'a';
	while(lowercase <='z')
	{
		putchar(lowercase);
			lowercase++;
			putchar("\n");
	}
	return 0;
}
