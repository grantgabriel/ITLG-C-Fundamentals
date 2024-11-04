#include <stdio.h>

int main() {
    int var = 10;  // Variabel biasa
    int *ptr;      // Deklarasi pointer

    // Menyimpan alamat dari variabel 'var' ke pointer 'ptr'
    ptr = &var;

    // Output alamat dari var dan nilai dari var
    printf("Alamat dari var: %p\n", &var);
    printf("Nilai dari var: %d\n", var);

    // Output alamat yang disimpan di pointer dan nilai yang ditunjuk oleh pointer
    printf("Alamat yang disimpan di ptr: %p\n", ptr);
    printf("Nilai yang ditunjuk oleh ptr: %d\n", *ptr);

    // Mengubah nilai dari var melalui pointer
    *ptr = 20;
    printf("\nNilai dari var setelah diubah melalui pointer: %d\n", var);

    return 0;
}

/*
int fungsiA() {
  int a, int b;
  return a;
}



*/