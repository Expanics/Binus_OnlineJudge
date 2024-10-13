#include <stdio.h>

int main() {
  int a, b, c;
  
  scanf("%d", &a);

  for (int y = 0; y < a; y++) {
    scanf("%d %d", &b, &c);
    
    int hasil = 0;
    
    int front = c / 2;
    int back = (b / 2) - (c / 2);
    
    printf("Case #%d: %d\n", y + 1, (front < back) ? front : back);
  } 

  return 0;
}
