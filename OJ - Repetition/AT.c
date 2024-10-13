#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	
	for (int l = 0; l < a; l++){
    scanf("%d", &b);
    
    for (int y = 0; y < b; y++) {
        for (int z = b; z > y+1; z--) {
          printf(" ");
        }
        
        for (int x = 0; x <= y; x++) {
          printf("*");
        }
        
        for (int x = 0; x < y; x++) {
          printf("*");
        }
      printf("\n");
    }
	}
	
	return 0;
}

