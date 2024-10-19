// Inisiasi library. 
// stdio.h -> standard input output library (Untuk masukan dan keluaran dari program C)
#include <stdio.h>

// Fungsi main, blok kode yang pertama kali dijalankan
int main() {
  printf("Selamat datang di program C\n");
  printf("Masukkan inisial nama anda: "); // Printf == print format. Print ke terminal
  
  char inisial;
  scanf("%c", &inisial); // Baca masukkan dari terminal

  printf("Masukkan umur anda: ");
  
  int umur;
  scanf("%d", &umur);

  printf("\nInisial anda adalah %c dan umur anda adalah %d", inisial, umur);

  return 0;
}