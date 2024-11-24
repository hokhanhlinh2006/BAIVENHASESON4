#include <stdio.h>

int main() {
    int oldIndex, newIndex;
    int consumption;
    long totalAmount = 0;

    printf("Nhap chi so c�ng to dien dau th�ng: ");
    scanf("%d", &oldIndex);

    printf("Nhap chi so c�ng to dien cuoi th�ng: ");
    scanf("%d", &newIndex);

    if (newIndex < oldIndex) {
        printf("Chi so moi kh�ng the nho hon chi so cu.\n");
        return 1;  
    }

    consumption = newIndex - oldIndex;
    printf("Luong dien ti�u thu trong th�ng: %d kWh\n", consumption);

    if (consumption <= 50) {
        totalAmount = consumption * 1500;  
    } else if (consumption <= 100) {
        totalAmount = 50 * 1500 + (consumption - 50) * 2000;  
    } else {
        totalAmount = 50 * 1500 + 50 * 2000 + (consumption - 100) * 2500;  
    }

    printf("So tien dien phai tra l�: %ld VND\n", totalAmount);

    return 0;
}

