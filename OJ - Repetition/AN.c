#include <stdio.h>

int main()
{
	int a;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
	  int angka[6];
		for (int y = 0; y < 6; y++) {
	    scanf("%d", &angka[y]);
    }
	  
    printf("Case #%d: ", x + 1);
    
    for (int y = 0; y < 6; y++) {
      for (int z = 0; z < angka[y]; z++) {
        if (y == 0) printf("%c", 'a');
        if (y == 1) printf("%c", 's');
        if (y == 2) printf("%c", 'h');
        if (y == 3) printf("%c", 'i');
        if (y == 4) printf("%c", 'a');
        if (y == 5) printf("%c", 'p');
      }
    }
    
	  printf("\n");
	}
	
	return 0;
}

