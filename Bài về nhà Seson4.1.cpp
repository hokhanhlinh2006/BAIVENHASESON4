#include <stdio.h>

int main() {
    int number;

    printf("Nhap vào mot so nguyên: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("So ban nhap là so duong.\n");
    } else if (number < 0) {
        printf("So ban nhap là so âm.\n");
    } else {
        printf("So ban nhap là so 0.\n");
    }

    return 0;
}

