#include <stdio.h>

int main()
{
	long int b, c, a = 0;
	
	scanf("%ld", &b);
	
	for (long int x = 0; x < b; x++){
	  scanf("%ld", &c);
	  a += c;
	  if(a == 9) a = 21;
	  if(a == 33) a = 42;
	  if(a == 76) a = 92;
	  if(a == 53) a = 37;
	  if(a == 80) a = 59;
	  if(a == 97) a = 88;
	}
	
	printf("%ld\n", a);
	
	return 0;
}

