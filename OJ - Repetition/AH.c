#include <stdio.h>

int main()
{
	long int a, b;

	scanf("%ld", &a);
	
	for(long int l = 0; l < a; l++) {
	  scanf("%ld", &b);

	  long int hasil = 0;
	  while (b > 0) {
	    hasil++;
	    b /= 10L;
	  }
    printf("Case #%ld: %ld\n", l + 1L, hasil);
	}
  
	
	return 0;
}

