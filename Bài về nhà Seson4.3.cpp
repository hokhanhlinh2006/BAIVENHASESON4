#include <stdio.h>

int main() {
    int number;

    printf("Nhap vào mot s0 nguyên: ");
    scanf("%d", &number);
    
    if (number % 3 == 0 && number % 5 == 0) {
        printf("So ban nhap chia het cho ca 3 và 5.\n");
    } else if (number % 3 == 0) {
        printf("So ban nhap chia het cho 3.\n");
    } else if (number % 5 == 0) {
        printf("So ban nhap chia het cho 5.\n");
    } else {
        printf("So ban nhap không chia het cho 3, 5 hay ca hai.\n");
    }

    return 0;
}

