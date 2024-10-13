#include <stdio.h>

int main() {
  int a, b;
  
  scanf("%d", &a);

  for (int y = 0; y < a; y++) {
    scanf("%d", &b);
    
    int hasil = 0;
    int max = 0;
    
    for (int x = 1; x <= b; x++) {
      max += x;
      if(max >= b) {
        hasil = x;
        break;
      }
    }
    printf("Case #%d: %d\n", y + 1, hasil);
  }

  return 0;
}
