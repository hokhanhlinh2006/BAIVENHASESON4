#include <stdio.h>

int main() {
    int a, b, c;

    printf("Nhap v�o so nguy�n thu nhat: ");
    scanf("%d", &a);

    printf("Nhap v�o so nguy�n thu hai: ");
    scanf("%d", &b);

    printf("Nhap v�o so nguy�n thu ba: ");
    scanf("%d", &c);

    if ((c > a && c < b) || (c > b && c < a)) {
        printf("So thu ba nam trong khoang giua so thu nhat v� so thu hai.\n");
    } else {
        printf("So thu ba kh�ng nam trong khoong giua so thu nhat v� so thu hai.\n");
    }

    return 0;
}

