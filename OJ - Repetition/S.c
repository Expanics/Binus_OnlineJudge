#include <stdio.h>

int main()
{
	long int a, b, c;
	long int oke = 0;

	scanf("%ld %ld", &a, &b);
	
	for (long int x = 0; x < a; x++){
	  scanf("%ld", &c);
	  if (b > c) {
	    oke++;
	  }
	}
	
	printf("%ld\n", oke);
	
	return 0;
}

