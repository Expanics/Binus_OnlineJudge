#include <stdio.h>

int main()
{
	int c, b;
	
	scanf("%d", &b);
	
	for (int j = 0; j < b; j++) {
	  scanf("%d", &c);
	  printf("Case #%d:\n", j+1);
    for (int y = 0; y < c; y++){
      for (int z = c; z > y + 1; z--) {
        printf(" ");
      }
      for (int x= 0; x <= y; x++) {
        if(c % 2) {
          if (!(x % 2)) {
            printf("*");
          } else {
            printf("#");
          }
        } else {
          if (x % 2 || c == 1 ) {
            printf("*");
          } else {
            printf("#");
          }
        }
      }
      printf("\n");
    }
	}
	
	return 0;
}

