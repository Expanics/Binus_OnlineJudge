#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  scanf("%d %d %d %d %d", &b, &c, &d, &e, &f);
	  
	  int hasil = 0;
		for (int y = 1; y <= b; y++) {
		  if(y % c == 0 || y % d == 0 || y % e == 0 || y % f == 0) hasil++;
	  }
	  
	  printf("Case #%d: %d\n", x + 1, hasil);
	}
	
	return 0;
}
