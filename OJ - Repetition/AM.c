#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	
	for (int x = 0; x < a; x++){
    scanf("%d", &b);
	  
    printf("Case #%d:\n", x + 1);
    
    for (int y = 1; y <= b; y++) {
        if ((y % 3 == 0 || y % 5 == 0) && y % 15 != 0){
          printf("%d Jojo\n", y);
        } else {
          printf("%d Lili\n", y);
        }
    }
	}
	
	return 0;
}

