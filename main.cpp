#include <stdio.h>

int main() {
    int n, i, tong = 0;

    // nhập số nguyên dương
    do {
        printf("Nhập một số nguyên dương n: ");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Vui lòng nhập số nguyên dương lớn hơn 0.\n");
        }
    } while (n <= 0);

    // Tính tổng từ 1 đến n
    for (i = 1; i <= n; i++) {
        tong += i;
    }

    // In kết quả
    printf("Tổng các số nguyên từ 1 đến %d là: %d\n", n, tong);

    return 0;
}
