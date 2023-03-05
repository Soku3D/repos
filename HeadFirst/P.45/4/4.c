#include <stdio.h>

int main(void)
{
	char suit = 'H';

	switch(suit)
	{
		case 'A':
			puts("hi");
			break;

		case 'H':
			puts("hello");
			break;

		default:
			puts("default");
	}

	

	return 0;
}