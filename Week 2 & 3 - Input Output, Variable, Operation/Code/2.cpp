#include <stdio.h>

int main() {
    int a = 5, b = 3, result;
    
    // Operator Aritmatika
    printf("Operator Aritmatika:\n");
    printf("Penjumlahan: %d + %d = %d\n", a, b, a + b);
    printf("Pengurangan: %d - %d = %d\n", a, b, a - b);
    printf("Perkalian: %d * %d = %d\n", a, b, a * b);
    printf("Pembagian: %d / %d = %d\n", a, b, a / b);
    printf("Sisa bagi: %d %% %d = %d\n", a, b, a % b);
    
    // Operator Increment & Decrement
    printf("\nIncrement dan Decrement:\n");
    printf("a sebelum post-increment: %d\n", a++);
    printf("a setelah post-increment: %d\n", a);
    printf("b sebelum pre-increment: %d\n", ++b);
    
    // Operator Perbandingan
    printf("\nOperator Perbandingan:\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    
    // Operator Logika
    printf("\nOperator Logika:\n");
    printf("(a > b) && (b > 0): %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0): %d\n", (a < b) || (b > 0));
    printf("!(a == b): %d\n", !(a == b));
    
    // Operator Penugasan
    printf("\nOperator Penugasan:\n");
    result = a + b;
    printf("result = a + b: %d\n", result);
    result += a;
    printf("result += a: %d\n", result);
    result *= 2;
    printf("result *= 2: %d\n", result);

    return 0;
}
