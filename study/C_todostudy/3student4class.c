#include <stdio.h>

void average(float score[3][4], int n);  // 函数声明
void search(float score[3][4], int n);   // 函数声明

int main()
{
    float score[3][4] = {
        {65, 67, 70, 60},
        {80, 87, 90, 81},
        {90, 99, 100, 98}
    };
    int n;

    // 计算总平均分
    average(score, 3);

    // 查询第n个学生的成绩
    printf("请输入要查询的学生编号(1-3): ");
    scanf("%d", &n);
    if (n >= 1 && n <= 3) {
        search(score, n - 1);
    } else {
        printf("无效的学生编号\n");
    }

    return 0;
}

// 计算所有学生的总平均分
void average(float score[3][4], int n)
{
    float sum = 0.0;
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            sum += score[i][j];
        }
    }

    printf("所有学生的总平均分为: %.2f\n", sum / (n * 4));
}

// 查询第n个学生的成绩
void search(float score[3][4], int n)
{
    int j;
    printf("学生%d的成绩为:\n", n + 1);
    for (j = 0; j < 4; j++) {
        printf("课程%d: %.2f\n", j + 1, score[n][j]);
    }
}