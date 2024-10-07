#include <stdio.h>

int main() {
    int N; // Jumlah balon
    long long P; // Kekuatan Bibi
    scanf("%d %lld", &N, &P);

    int count = 0; // Variabel untuk menghitung jumlah balon yang bisa dipecahkan
    for (int i = 0; i < N; i++) {
        long long xi; // Kekuatan balon ke-i
        scanf("%lld", &xi);
        if (xi < P) {
            count++; // Jika kekuatan balon lebih kecil dari kekuatan Bibi, tambahkan hitungan
        }
    }

    // Cetak hasil jumlah balon yang bisa dipecahkan
    printf("%d\n", count);

    return 0;
}
