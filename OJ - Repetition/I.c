#include <stdio.h>

int main()
{
	long int a, b, jojo, lili, bibi;
	long int peserta = 0;

	scanf("%ld", &a);
  scanf("%ld %ld %ld", &jojo, &lili, &bibi);
	
	for (long int x = 0; x < a; x++){
	  scanf("%ld", &b);
	  peserta += b;
	}
	
	double c = (double)(jojo + lili + bibi + peserta) / (3.0 + (double)a);
	
	if((double) jojo >= c) {
	  printf("Jojo lolos\n");
	} else {
	  printf("Jojo tidak lolos\n");
	}
	
	if((double) lili >= c) {
	  printf("Lili lolos\n");
	} else {
	  printf("Lili tidak lolos\n");
	}
	
	if((double) bibi >= c) {
	  printf("Bibi lolos\n");
	} else {
	  printf("Bibi tidak lolos\n");
	}
	
	return 0;
}

