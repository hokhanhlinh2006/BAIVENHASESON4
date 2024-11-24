#include <stdio.h>

int main() {
    int month;

    printf("Nhap vào so tháng (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: // Tháng 1 có 31 ngày
        case 3: // Tháng 3 có 31 ngày
        case 5: // Tháng 5 có 31 ngày
        case 7: // Tháng 7 có 31 ngày
        case 8: // Tháng 8 có 31 ngày
        case 10: // Tháng 10 có 31 ngày
        case 12: // Tháng 12 có 31 ngày
            printf("Tháng %d có 31 ngày.\n", month);
            break;
        case 4: // Tháng 4 có 30 ngày
        case 6: // Tháng 6 có 30 ngày
        case 9: // Tháng 9 có 30 ngày
        case 11: // Tháng 11 có 30 ngày
            printf("Tháng %d có 30 ngày.\n", month);
            break;
        case 2: 
            printf("Nhap vào nam: ");
            int year;
            scanf("%d", &year);
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                printf("Tháng 2 nam %d có 29 ngày (nam nhu?n).\n", year);
            } else {
                printf("Tháng 2 nam %d có 28 ngày.\n", year);
            }
            break;
        default:
            printf("So tháng không hop le.\n");
    }

    return 0;
}

