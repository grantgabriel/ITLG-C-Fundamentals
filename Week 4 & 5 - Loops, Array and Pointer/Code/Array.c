#include <stdio.h>

int main() {
    // Deklarasi dan inisialisasi array
    int mark[5] = {19, 10, 8, 17, 9};

    // Output elemen array
    printf("Elemen awal dari array:\n");
    for (int i = 0; i < 5; i++) {
        printf("mark[%d] = %d\n", i, mark[i]);
    }

    // // Mengubah nilai elemen array
    mark[2] = -1;  // Mengubah elemen ketiga menjadi -1
    mark[4] = 0;   // Mengubah elemen kelima menjadi 0

    // // Input elemen array
    printf("\nMasukkan nilai untuk elemen ke-3: ");
    scanf("%d", &mark[2]);

    // // Output array setelah perubahan
    printf("\nArray setelah perubahan:\n");
    for (int i = 0; i < 5; i++) {
        printf("mark[%d] = %d\n", i, mark[i]);
    }

    return 0;
}
