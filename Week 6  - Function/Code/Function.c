#include <stdio.h>

void printPesan() {
  printf("Ini pesan dari fungsi printPesan, tidak menerima nilai apapun\n");
}

void printPesanCustom(char *x) {
  printf("Ini pesan dari fungsi printPesanCustom, pesan: %s\n", x);
}

int tambahkan(int a, int b) {
  int jumlah = a + b;
  return jumlah;
}

int main() {
  printPesan();

  printPesanCustom("Com A Bersama Pak Opim");

  printf("%d", tambahkan(5, 2));

  return 0;
}