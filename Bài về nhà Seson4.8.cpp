#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap v�o canh thu nht: ");
    scanf("%f", &a);

    printf("Nhap v�o canh thu hai: ");
    scanf("%f", &b);

    printf("Nhap v�o canh thu ba: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("L� 3 canh tam gi�c.\n");
    } else {
        printf("Kh�ng phai 3 canh tam gi�c.\n");
    }

    return 0;
}

