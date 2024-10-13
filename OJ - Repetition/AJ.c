#include <stdio.h>

int main()
{
	long int a, b;
	long int hasil = 0;

	scanf("%ld", &a);
	
	for(long int l = 0; l < a; l++) {
	  scanf("%ld", &b);
	  hasil += b;
	}
  
  printf("%ld\n", hasil);
	
	return 0;
}

