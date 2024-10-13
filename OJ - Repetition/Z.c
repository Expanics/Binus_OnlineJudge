#include <stdio.h>

int main()
{
	long int b, c, a = 0;
 {
   
 }	
	scanf("%ld", &b);
	
	for (long int x = 0; x < b; x++){
	  scanf("%ld", &c);
	  a += c;
	  
	  if (a >= 40) {
	  	a -= 40;
	  }
	  
	  if(a == 12) {
	    a = 28; 
	  } else if(a == 35) {
	    a = 7; 
	  } else if(a == 30) {
	    a = 10;
	  }
	}
	
	printf("%ld\n", a);
	
	return 0;
}

