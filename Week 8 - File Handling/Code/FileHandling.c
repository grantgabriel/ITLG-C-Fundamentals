#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "example.txt"; // Nama file yang akan digunakan
    char text[100];

    // Membuka file dalam mode menulis (write mode)
    file = fopen(filename, "w");

    // Menulis data ke dalam file
    fprintf(file, "Contoh penulisan teks ke dalam file.\n");
    fprintf(file, "Ini adalah baris kedua dalam file.\n");
    fclose(file);
    printf("Data telah ditulis ke dalam file %s\n\n", filename);

    // Membuka file dalam mode membaca (read mode)
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Gagal membuka file untuk membaca.\n");
        return 1;
    }

    // Membaca dan menampilkan data dari file
    printf("Isi dari file %s:\n\n", filename);
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }
    fclose(file);

    // // Membuka file dalam mode menambahkan (append mode)
    // file = fopen(filename, "a");
    // if (file == NULL) {
    //     printf("Gagal membuka file untuk menambahkan.\n");
    //     return 1;
    // }

    // // Menambahkan data ke dalam file
    // fprintf(file, "Menambahkan baris baru di akhir file.\n");
    // fclose(file);
    // printf("Data tambahan telah ditulis ke dalam file %s\n\n", filename);

    // // Membaca dan menampilkan data dari file
    // file = fopen(filename, "r");
    // printf("Isi dari file %s:\n\n", filename);
    // while (fgets(text, sizeof(text), file) != NULL) {
    //     printf("%s", text);
    // }
    // fclose(file);

    return 0;
}