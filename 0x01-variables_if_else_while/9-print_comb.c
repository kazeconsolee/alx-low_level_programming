#include <stdio.h>
#include <stdlib.h>
/**
 * Description: prints all single digit numbers of base 10
 */
int main(void)
{
	int c = 0;
	/* your code goes there */
	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
