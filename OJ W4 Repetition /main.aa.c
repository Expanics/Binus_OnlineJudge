#include <stdio.h>

int main() {
    int N; 
    scanf("%d", &N);

    int posisi = 0; 

    for (int i = 0; i < N; i++) {
        int k;
        scanf("%d", &k);
        posisi += k; 

        if (posisi == 9) {
            posisi = 21;
        } else if (posisi == 33) {
            posisi = 42;
        } else if (posisi == 76) {
            posisi = 92;
        }

       
        if (posisi == 53) {
            posisi = 37;
        } else if (posisi == 80) {
            posisi = 59;
        } else if (posisi == 97) {
            posisi = 88;
        }

        
        if (posisi > 30000) {
            posisi = 30000;
        }
    }

    
    printf("%d\n", posisi);

    return 0;
}
