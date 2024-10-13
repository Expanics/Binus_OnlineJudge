#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	
	for (int l = 0; l < a; l++){
    scanf("%d", &b);
    
	  char jawab[b+1], kunci[b+1];
	  
    scanf("%s", &jawab);
    scanf("%s", &kunci);
	  
	  int nilai = 0;
    
    for (int y = 0; y < b; y++) {
        if(jawab[y] == kunci[y]) {
          nilai++;
        }
    }
    
    printf("Case #%d: %d\n", l + 1, (nilai * 100) / b);
	}
	
	return 0;
}

