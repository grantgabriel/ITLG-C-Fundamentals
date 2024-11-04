// Rekursif adalah sebuah fungsi yang memanggil fungsi itu sendiri didalamnya!
// Contoh: iniFungsi() { iniFungsi(); }

#include <stdio.h>

int faktorial(int n) {
  if(n == 1) {
    return 1;
  } 
  
  return n * faktorial(n - 1);
}

int main() {
  int nilai = faktorial(5);

  printf("Faktorial dari 5 adalah: %d", faktorial(6));
  return 0;
}