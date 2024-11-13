#include <stdio.h>

struct Mobil {
  char merek[50];
  int pintu;
};

struct Mahasiswa {
  struct Mobil mobilMhs;
  char nama[50];
  int umur;
  int nim;
};

int main() {
  struct Mahasiswa mhs1;
  struct Mahasiswa mhs2;

  mhs1.mobilMhs.merek;

  printf("Masukkan nama: ");
  scanf("%s", &mhs1.nama);
  printf("Masukkan umur: ");
  scanf("%d", &mhs1.umur);
  printf("Masukkan NIM: ");
  scanf("%d", &mhs1.nim);

  // Nama: Grant Gabriel Tambunan, umur: 20, NIM: 221402057
  printf("Nama: %s, umur: %d, NIM: %d", mhs1.nama, mhs1.umur, mhs1.nim);
  return 0;
}