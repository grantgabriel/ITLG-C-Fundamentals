// Tahun aku (2022), soal ini keluar walau tata bahasanya berbeda, dan di 2023 juga keluar, mungkin bisa dipelajari ya. Ini sebenarnya teknis sih.
// Ingett aja kalau misal print dengan format yang normal, dia pake %d (Kalau integer ya), kalau oktal dia pakai %o, dan kalo heksa pakai %X.
// Sebenarnya ini banyak hapalannya dan banyak banget di google, tapi rasaku gak akan dikasih yang terlalu adavance. Semangattt!!!

#include <stdio.h>

int main() {
    int n;

    printf("Input gan nomornya: ");
    scanf("%d", &n);

    // Ini dia formatnya, kalau mau di print dengan format lain, ada lagi hapalannya, semangat hapalnya (Hapal yang ada di PPT bapak itu aja)
    printf("X=%d, Y=%o, dan Z=0x%X\n", n, n, n);

    return 0;
}
