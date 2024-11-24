#include <stdio.h>

int main() {
    int month;

    printf("Nhap v�o so th�ng (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: // Th�ng 1 c� 31 ng�y
        case 3: // Th�ng 3 c� 31 ng�y
        case 5: // Th�ng 5 c� 31 ng�y
        case 7: // Th�ng 7 c� 31 ng�y
        case 8: // Th�ng 8 c� 31 ng�y
        case 10: // Th�ng 10 c� 31 ng�y
        case 12: // Th�ng 12 c� 31 ng�y
            printf("Th�ng %d c� 31 ng�y.\n", month);
            break;
        case 4: // Th�ng 4 c� 30 ng�y
        case 6: // Th�ng 6 c� 30 ng�y
        case 9: // Th�ng 9 c� 30 ng�y
        case 11: // Th�ng 11 c� 30 ng�y
            printf("Th�ng %d c� 30 ng�y.\n", month);
            break;
        case 2: 
            printf("Nhap v�o nam: ");
            int year;
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Th�ng 2 nam %d c� 29 ng�y (nam nhu?n).\n", year);
            } else {
                printf("Th�ng 2 nam %d c� 28 ng�y.\n", year);
            }
            break;
        default:
            printf("So th�ng kh�ng hop le.\n");
    }

    return 0;
}

