#include <stdio.h>

int main()
{
	long int a, b;

	scanf("%ld", &a);
	
	for(long int l = 0; l < a; l++) {
	  scanf("%ld", &b);

    printf("Case %ld:", l + 1L);
	  long int hasil = 0;
	  long int nilai = 1;
	  for (long int y = 0; y < b; y++) {
	    if (y > 1L) nilai++;
	    hasil += nilai;
	    printf(" %ld", hasil);
	  }
	  printf("\n");
	}
  
	
	return 0;
}

