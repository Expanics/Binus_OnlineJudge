#include <stdio.h>

int main()
{
	long int a;

	scanf("%ld", &a);
	
	a = ((a + 2L) * (a + 1L)) / 2L;
	
	printf("%ld\n", a);
	
	return 0;
}

