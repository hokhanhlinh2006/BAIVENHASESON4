#include <stdio.h>

int main() {
    int number;

    printf("Nhap v�o mot s0 nguy�n: ");
    scanf("%d", &number);
    
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So ban nhap chia het cho ca 3 v� 5.\n");
    } else if (number % 3 == 0) {
        printf("So ban nhap chia het cho 3.\n");
    } else if (number % 5 == 0) {
        printf("So ban nhap chia het cho 5.\n");
    } else {
        printf("So ban nhap kh�ng chia het cho 3, 5 hay ca hai.\n");
    }

    return 0;
}

