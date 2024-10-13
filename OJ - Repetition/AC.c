#include <stdio.h>

int main()
{
	long int a, b, c, d;

	scanf("%ld", &a);
	
	for (long int x = 0; x < a; x++){
	  scanf("%ld %ld", &b, &c);
	  
		long int angka;
		long int bisaDibeli = 0;
		long minJual = 1000000001;
		
		for (long int y = 0; y < b; y++) {
		  scanf("%ld", &angka);
		  if (angka < minJual) {
		    minJual = angka;
		  }
	  }
	  
    bisaDibeli = c / minJual;
	  
    printf("Case #%ld: %ld\n", x + 1, bisaDibeli);
	}
	
	return 0;
}

