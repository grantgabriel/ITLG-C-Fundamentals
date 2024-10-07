// Sebenarnya ini program adalah perkalian a * b. Perhatikan kalau a dijumlahkan ke c sebanyak b kali, ibarat kata
// apabila b = 4 dan a = 7, maka nilai c = a + a + a + a (4 kali), atau 7 + 7 + 7 + 7 = 28. Hal ini sebenarnya sama saja
// dengan a * b = 28... Kalau logikanya sudah dapat, sebenarnya ngerjain soal ini paling mudah hehehe.


#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b); 

  int k = 0;
  int c = 0;

  // K dimulai dari 0, diulang hingga b kali. Apabila b == 4, maka program diulang hingga 4 kali.
  while(k != b) {
    k = k + 1;
    c = c + a; // C yang tadinya 0, ditambahkan dengan value dari a sebanyak 4 kali.
  }

  printf("c=%d\n", c); // Tinggal print deh, hasilnya sebenarnya sama saja dengan a * b :P
}