#include <stdio.h>

int main() {
    int number;

    printf("Nhap v�o mot so nguy�n: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("So ban nhap l� so chan.\n");
    } else {
        printf("So ban nhap l� so le.\n");
    }

    return 0;
}

