// Satu hal yang lom perna berubah dari bapak ini dari tahun ke tahun adalah bahasa soalnya yang teknis dan matematis. Kalian harus take time buat
// pahami apa yang dimaksud dari soal itu. Once you get the logic, the rest is easy peasy. Contohnya di soal ketiga ini. Soal ketiga ini kalian 
// di perkenalkan dengan konsep matematika bernama coprime. Sebenarnya, simpelnya coprime ini adalah 2 bilangan, yang pembaginya gak ada yang sama.

// Heran? Kita ambil contoh angka 5 dan 6. Untuk 5 pembaginya kan adalah 1 dan 5, kalo angka 6 pembaginya adalah 1, 2, 3, 6. Pembagi itu adalah
// bilangan yang kalo dimodulo kan ke angka nya, hasil modulo nya == 0. Contoh, 6 % 2 (Salah satu pembagi 6) == 0. Jadi kalian diminta untuk 
// menentukan apakah dua bilangan itu adalah coprime (Pembaginya gak ada yang sama kecuali angka 1). 

// Simpelnya? Perulangan ke angka yang terbesar. Misal diantara 5 dan 6, angka terbesar adalah 6, maka buat perulangan dari angka 2 sampai angka terbesar
// dan coba masing masing. Misal diperulangan pertama, angka 2, dimodulo kan ke 5 dan 6. Disaat modulo ke 5, bandingkan dengan modulo 6, kalau sama, 
// maka bilangan itu bukan coprime dan berhenti. Kalau beda, lanjutt sampe akhir perulangan. Kalo di akhir perulangan tidak ada hasil modulo yang sama,
// berarti bilangan itu adalah coprime yeyy. 

#include <stdio.h>
#include <math.h>

int main() {
    int bil1, bil2;

    printf("Input gan nomor pertamanya: ");
    scanf("%d", &bil1);

    printf("Input gan nomor keduanya: ");
    scanf("%d", &bil2);

    int bilanganMax;

    // Mencari bilangan maksimum. Gunanya ini sebagai batasan looping kita
    if(bil1 > bil2) {
      bilanganMax = bil1;
    } else {
      bilanganMax = bil2;
    }

    for(int i = 2; i <= bilanganMax; i++) {
      // Kita cari tuh, apakah ada bilangan diantara 2 sampai angka terbesar, yang sama sama habis membagi kedua bilangan ituu.
      // Kalau ada, berarti dia bukan coprime. Kalau gada sampai angka terbesar, berarti dia coprimeee.
      if(bil1 % i == 0 && bil2 % i == 0) {
        printf("(%d, %d) adalah bukan coprime", bil1, bil2);
        return 0;
      }
    }

    printf("(%d, %d) adalah coprime", bil1, bil2);
    return 0;
}

// Sebenarnya ada cara cepatnya, makai GCD (Greatest common divisor), cuma buat mahasiswa baru, yang di ekspek bapak itu lebih ke cara brute-force 
// seperti ini. Kalau kalian mau pelajari cara GCD nya mungkin bisa PC aku, tapi kalo kalian langsung dapat logikanya makai GCD buat ngerjain ini,
// selamat, kalian bisa jadi murid yang ditandai bapak itu sebagai murid pintar hehehe. Semangattt semua!!!