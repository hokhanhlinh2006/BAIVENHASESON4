#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap vào so nguyên thu nhat: ");
    scanf("%d", &a);

    printf("Nhap vào so nguyên thu hai: ");
    scanf("%d", &b);

    printf("Nhap vào so nguyên thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So thu ba nam trong khoang giua so thu nhat và so thu hai.\n");
    } else {
        printf("So thu ba không nam trong khoong giua so thu nhat và so thu hai.\n");
    }

    return 0;
}

