#include <stdio.h>

int main() {
    int num;
    int lima = 5;
    
    // Input dari pengguna
    printf("Masukkan sebuah angka: ");
    scanf("%d", &num);
    
    // // If
    // if (num > 0) {
    //     printf("Angka positif\n");
    // }
    
    // // If-Else
    // if (num % 2 == 0) {
    //     printf("Angka genap\n");
    // } else {
    //     printf("Angka ganjil\n");
    // }
    
    // // If-Else If-Else
    // if (num < 0) {
    //     printf("Angka lebih kecil dari 0\n");
    // } else if (num == 0) {
    //     printf("Angka nol\n");
    // } else {
    //     printf("Angka lebih besar dari 0\n");
    // }

    // Switch Case
    switch(num) {
        case 1:
            printf("Angka adalah 1\n");
            break;
        case 2:
            printf("Angka adalah 2\n");
            break;
        default:
            printf("Angka bukan 1 atau 2\n");
            break;
    }

    return 0;
}
