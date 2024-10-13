#include <stdio.h>

int main()
{
	long int a, b, c;

	scanf("%ld", &a);
	
	for (long int x = 0; x < a; x++){
	  scanf("%ld", &b);
	  
	  long int hasil = 0;
	  for(long int y = 0; y < b; y++) {
	    scanf("%ld", &c);
	    hasil += c;
	  }
	  printf("Case #%ld: %ld\n", x + 1, hasil);
	}
	
	return 0;
}

