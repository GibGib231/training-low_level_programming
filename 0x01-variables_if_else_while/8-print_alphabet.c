#include<stdio.h>
int main(void)
        /* this code should prints all single digit numbers of base _10 from _0 to _9 */
        /* you are to use only  putchar function */
{

       char n = '0';
       char l = 'a';
       while (n <= '9')
       {
	       putchar(n);
	       n++;
       }
       while (l <= 'f')
       {
	       putchar(l);
	       l++;
       }


                putchar('\n');
        return 0;
        }

