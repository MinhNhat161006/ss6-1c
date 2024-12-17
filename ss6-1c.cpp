#include <stdio.h>

int main() {
    int numbers[5]; 
    int i, sum = 0; 

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 0; i < 5; i++) {
        printf("So thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) { 
            sum += numbers[i];
        }
    }

    printf("Tong cac so le la: %d\n", sum);

    return 0;
}
