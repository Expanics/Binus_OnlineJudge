#include <stdio.h>

int main()
{
	long int a, b, c;

	scanf("%ld", &a);
	
	for(long int l = 0; l < a; l++) {
	  scanf("%ld %ld", &b, &c);
	  printf("Case #%ld: %.2lf\n", l + 1L, (2.0 * 3.14 * (double)b  * (double)(b+c)));
	}
  
	
	return 0;
}

