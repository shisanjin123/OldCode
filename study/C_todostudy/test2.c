#include <stdio.h>
#include <math.h>

int main() {
    int start = 100; // 水仙花数的最小值
    int end = 999;   // 水仙花数的最大值

    printf("水仙花数有：\n");
    for (int i = start; i <= end; i++) {
        int num = i;
        int sum = 0;
        int digits = 0;

        // 计算位数
        while (num != 0) {
            num /= 10;
            digits++;
        }

        num = i; // 重置 num 为原始值

        // 计算每个位数字的 n 次幂之和
        while (num != 0) {
            int digit = num % 10; // 取最后一位数字
            sum += pow(digit, digits); // 加上该位数字的 n 次幂
            num /= 10; // 去掉最后一位数字
        }

        // 检查是否为水仙花数
        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
