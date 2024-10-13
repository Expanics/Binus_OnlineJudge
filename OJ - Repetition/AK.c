#include <stdio.h>

int main()
{
	long int a, b, c;

	scanf("%ld", &a);
	long int angka[a+1];
	
	for(long int l = 0; l < a; l++) {
	  scanf("%ld", &angka[l]);
	}
	
	long int hasil = 0; 
	for(long int l = 0; l < a; l++) {
	  if(angka[l] == 1 && l != 0) {
	    printf("%ld ", hasil);
	    hasil = 1;
	  } else {
	    hasil++;
	  }
	}
	printf("%ld\n", hasil);
  
	
	return 0;
}

